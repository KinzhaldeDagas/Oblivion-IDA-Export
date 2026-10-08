void __thiscall sub_4978A0(unsigned __int8 *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edi
  unsigned __int8 v6; // al
  unsigned int v7; // [esp-4h] [ebp-Ch]

  v7 = *((_DWORD *)this + 1); /*0x4978a7*/
  *this = 0; /*0x4978a8*/
  FormHeapFree(v7); /*0x4978ab*/
  v3 = a2; /*0x4978b0*/
  if ( a2 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2) )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x154))(v3); /*0x4978d9*/
      if ( v4 ) /*0x4978dd*/
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4978e8*/
      else
        v5 = 0; /*0x4978ec*/
      v6 = sub_4977B0(v5); /*0x4978ef*/
      *this = v6; /*0x4978f9*/
      if ( v6 )
      {
        *((_DWORD *)this + 1) = FormHeapAlloc((0x1C * (unsigned __int64)v6) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * v6);
        a2 = 0; /*0x497926*/
        if ( !sub_497500(this, v5, &a2, 1) ) /*0x49792e*/
          PrintError("Failed to initialize RagDollData."); /*0x49793c*/
      }
    }
  }
}
