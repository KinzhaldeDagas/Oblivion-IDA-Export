void __thiscall sub_786FC0(unsigned int *this)
{
  unsigned int v2; // [esp-8h] [ebp-10h]

  FormHeapFree(*(this + 2));
  v2 = *(this + 4);
  *(this + 2) = 0;
  FormHeapFree(v2);
  *(this + 4) = 0;
  *this = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
}
