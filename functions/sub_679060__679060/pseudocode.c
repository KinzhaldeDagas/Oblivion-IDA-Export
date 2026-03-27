LONG __thiscall sub_679060(int *this)
{
  LONG result; // eax
  int *v3; // ebp
  _BYTE *v4; // edi
  int (__thiscall ***v5)(_DWORD, int); // esi
  LONG v6; // [esp+Ch] [ebp-4h] BYREF

  result = 0;
  v6 = 0;
  if ( *(this + 0x11) || (result = 1, *(this + 0x10)) )
  {
    v3 = this + 0x10;
    if ( this != (int *)0xFFFFFFC0 )
    {
      do
      {
        v4 = (_BYTE *)*sub_677C70(v3, &v6);
        result = v6;
        if ( v6 )
        {
          v5 = (int (__thiscall ***)(_DWORD, int))v6;
          result = InterlockedDecrement((volatile LONG *)(v6 + 4));
          if ( !result )
            result = (**v5)(v5, 1);
        }
        if ( v4 )
        {
          result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 4))(v4);
          if ( result )
          {
            while ( (_UNKNOWN *)result != &unk_B3A694 )
            {
              result = *(_DWORD *)(result + 4);
              if ( !result )
                goto LABEL_16;
            }
            v4[0x28] = 1;
          }
        }
LABEL_16:
        v3 = (int *)v3[1];
      }
      while ( v3 );
    }
  }
  return result;
}
