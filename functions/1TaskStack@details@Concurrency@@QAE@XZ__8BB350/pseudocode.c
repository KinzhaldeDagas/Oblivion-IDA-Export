void __thiscall Concurrency::details::TaskStack::~TaskStack(FILE **this)
{
  if ( *(this + 2) )
    fflush(*(this + 2));
}
