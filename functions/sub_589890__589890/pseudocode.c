int __thiscall sub_589890(_DWORD *this)
{
  int result; // eax
  _DWORD *v3; // esi
  int v4; // edi

  result = *(this + 9); /*0x589893*/
  if ( result ) /*0x589898*/
  {
    if ( *(_WORD *)(result + 0x14) ) /*0x58989a*/
    {
      result = *(_DWORD *)(result + 0x10); /*0x5898a1*/
      v3 = *(_DWORD **)result; /*0x5898a5*/
      v4 = 0; /*0x5898a8*/
      if ( *(_DWORD *)result ) /*0x5898a5*/
      {
        while ( 1 ) /*0x5898b5*/
        {
          result = (*(int (__thiscall **)(_DWORD *))(*v3 + 4))(v3); /*0x5898b5*/
          if ( result ) /*0x5898b9*/
            break; /*0x5898b9*/
LABEL_7:
          result = *(_DWORD *)(*(this + 9) + 0x10); /*0x5898ce*/
          v3 = *(_DWORD **)(result + 4 * (unsigned __int16)++v4); /*0x5898da*/
          if ( !v3 ) /*0x5898df*/
            return result; /*0x5898df*/
        }
        while ( (NiRTTI *)result != &stru_B3FD44 ) /*0x5898c5*/
        {
          result = *(_DWORD *)(result + 4); /*0x5898c7*/
          if ( !result ) /*0x5898cc*/
            goto LABEL_7; /*0x5898cc*/
        }
        v3[3] = 0; /*0x5898e5*/
      }
    }
  }
  return result; /*0x5898e3*/
}
