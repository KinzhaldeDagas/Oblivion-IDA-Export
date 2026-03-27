LONG __thiscall sub_4BE330(void *this, __int16 a2, __int16 a3)
{
  int v4; // edx
  unsigned int i; // ebp
  unsigned int j; // edi
  int v7; // eax
  int (__thiscall *v8)(void *, int, volatile LONG **); // edx
  LONG result; // eax
  volatile LONG *v10; // ebx
  volatile LONG *v11; // [esp+14h] [ebp-10h] BYREF
  unsigned int v12; // [esp+20h] [ebp-4h]

  v4 = uGridsToLoad;
  for ( i = 0; i < v4; ++i )
  {
    for ( j = 0; j < v4; ++j )
    {
      v7 = sub_4EF1D0(a2 + i - (v4 >> 1), a3 + j - (v4 >> 1));
      v11 = 0;
      v8 = *(int (__thiscall **)(void *, int, volatile LONG **))(*(_DWORD *)this + 4);
      v12 = 0;
      result = v8(this, v7, &v11);
      if ( (_BYTE)result )
        sub_432130(v11);
      v10 = v11;
      v12 = 0xFFFFFFFF;
      if ( v11 )
      {
        result = InterlockedDecrement(v11 + 2);
        if ( !result )
        {
          if ( v10 )
            result = (**(int (__thiscall ***)(volatile LONG *, int))v10)(v10, 1);
        }
      }
      v4 = uGridsToLoad;
    }
  }
  return result;
}
