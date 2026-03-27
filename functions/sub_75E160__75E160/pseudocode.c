_DWORD *__thiscall sub_75E160(_DWORD *this, char a2)
{
  char v2; // bl
  _DWORD *result; // eax
  int v5; // ebp
  int v6; // ecx
  int v7; // ebp
  _DWORD *v8; // esi
  int v9; // edi
  int v10; // edi
  _DWORD *v11; // [esp+8h] [ebp-4h]

  v2 = a2;
  if ( (a2 & 2) != 0 )
  {
    result = this + 0xFFFFFFFF;
    v5 = *(this + 0xFFFFFFFF);
    v6 = 5 * v5;
    v7 = v5 - 1;
    v11 = this + 0xFFFFFFFF;
    v8 = this + v6;
    if ( v7 >= 0 )
    {
      do
      {
        v8 += 0xFFFFFFFB;
        *v8 = &NiPSysUpdateTask::`vftable';
        v9 = v8[3];
        if ( v9 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
            (**(void (__thiscall ***)(int, int))v9)(v9, 1);
          v8[3] = 0;
        }
        v10 = v8[3];
        if ( v10 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
            (**(void (__thiscall ***)(int, int))v10)(v10, 1);
        }
        *v8 = &NiTask::`vftable';
        NiRefObject_destr(v8);
        --v7;
      }
      while ( v7 >= 0 );
      result = v11;
      v2 = a2;
    }
    if ( (v2 & 1) != 0 )
    {
      FormHeapFree((unsigned int)result);
      return v11;
    }
  }
  else
  {
    sub_75DF80(this);
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)this);
    return this;
  }
  return result;
}
