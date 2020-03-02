OUTDIR=out
CXX=clang++
CXXFLAGS=-std=c++2a -fmodules -fprebuilt-module-path=$(OUTDIR)

.SUFFIXES:

.PHONY:
all: $(OUTDIR)/libabc.a

.PHONY:
clean:
	rm -f $(OUTDIR)/*

$(OUTDIR)/abc.pcm: abc.cpp
	$(CXX) $(CXXFLAGS) -c abc.cpp -Xclang -emit-module-interface -o $(OUTDIR)/abc.pcm

$(OUTDIR)/libabc.a: $(OUTDIR)/abc.pcm abc_impl.cpp
	$(CXX) $(CXXFLAGS) -fmodule-file=$(OUTDIR)/abc.pcm -c abc_impl.cpp -o $(OUTDIR)/libabc.a
