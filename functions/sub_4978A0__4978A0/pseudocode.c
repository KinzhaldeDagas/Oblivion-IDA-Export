void __thiscall sub_4978A0(unsigned __int8 *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edi
  unsigned __int8 v6; // al
  unsigned int v7; // [esp-4h] [ebp-Ch]

  v7 = *((_DWORD *)this + 1);
  *this = 0;
  FormHeapFree(v7);
  v3 = a2;
  if ( a2 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2) )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x154))(v3);
      if ( v4 )
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
      else
        v5 = 0;
      v6 = sub_4977B0(v5);
      *this = v6;
      if ( v6 )
      {
        *((_DWORD *)this + 1) = FormHeapAlloc((0x1C * (unsigned __int64)v6) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * v6);
        a2 = 0;
        if ( !sub_497500(this, v5, &a2, 1) )
          PrintError("Failed to initialize RagDollData.");
      }
    }
  }
}
