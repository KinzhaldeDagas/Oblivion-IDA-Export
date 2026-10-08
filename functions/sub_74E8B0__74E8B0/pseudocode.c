int __thiscall sub_74E8B0(_DWORD *this, float a2, char a3)
{
  _DWORD *v3; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // ecx
  _DWORD *i; // esi
  NiRTTI *v8; // eax
  int result; // eax

  v3 = 0; /*0x74e8b6*/
  if ( a3 ) /*0x74e8bd*/
  {
    v5 = (_DWORD *)*(this + 0x27); /*0x74e8c4*/
    while ( v5 ) /*0x74e8cc*/
    {
      v6 = (_DWORD *)v5[2]; /*0x74e8d0*/
      v5 = (_DWORD *)*v5; /*0x74e8d8*/
      if ( v6 ) /*0x74e8da*/
      {
        if ( v6[3] ) /*0x74e8dc*/
          (*(void (__stdcall **)(_DWORD))(*v6 + 0x50))(LODWORD(a2)); /*0x74e8ee*/
      }
    }
    for ( i = (_DWORD *)*(this + 3); i; i = (_DWORD *)i[0xD] ) /*0x74e8f9*/
    {
      v8 = (NiRTTI *)(*(int (__thiscall **)(_DWORD *))(*i + 4))(i); /*0x74e902*/
      if ( v8 ) /*0x74e906*/
      {
        while ( v8 != &stru_B40DFC ) /*0x74e90d*/
        {
          v8 = v8->parent; /*0x74e90f*/
          if ( !v8 ) /*0x74e914*/
            goto LABEL_11; /*0x74e914*/
        }
        v3 = i; /*0x74e950*/
      }
      else
      {
LABEL_11:
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*i + 0x54))(i, LODWORD(a2)); /*0x74e916*/
      }
    }
    (*(void (__thiscall **)(_DWORD *))(*this + 0x74))(this); /*0x74e935*/
    if ( v3 ) /*0x74e93a*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v3 + 0x54))(v3, LODWORD(a2)); /*0x74e94c*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 0x74))(this); /*0x74e959*/
  }
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x78))(this); /*0x74e962*/
  *((_BYTE *)this + 0xF4) = a3; /*0x74e968*/
  *((float *)this + 0x3C) = a2; /*0x74e96e*/
  return result; /*0x74e974*/
}
