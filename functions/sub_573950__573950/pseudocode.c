void __thiscall sub_573950(unsigned int *this)
{
  int v2; // ebp
  int *v3; // ebx
  int v4; // esi

  v2 = 0;
  if ( *(this + 0xE) )
  {
    v3 = (int *)(this + 3);
    do
    {
      if ( v2 >= *(_DWORD *)(*(this + 0xE) + 4) )
        break;
      v4 = *v3;
      if ( *v3 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        {
          if ( v4 )
            (**(void (__thiscall ***)(int, int))v4)(v4, 1);
        }
        *v3 = 0;
      }
      ++v2;
      ++v3;
    }
    while ( *(this + 0xE) );
  }
  FormHeapFree(*(this + 0xE));
  *(this + 0xE) = 0;
}
