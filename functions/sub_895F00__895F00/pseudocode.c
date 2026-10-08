char __thiscall sub_895F00(_DWORD *this)
{
  char v1; // bl
  _DWORD *v2; // ecx
  _DWORD *HavokObject; // eax
  void (__thiscall *v4)(_DWORD *, void ***); // edx
  _BYTE *v5; // ecx
  int v6; // edx
  void **v8; // [esp+8h] [ebp-120h] BYREF
  int v9; // [esp+Ch] [ebp-11Ch]
  char *v10; // [esp+10h] [ebp-118h]
  int v11; // [esp+14h] [ebp-114h]
  unsigned int v12; // [esp+18h] [ebp-110h]
  char v13; // [esp+1Ch] [ebp-10Ch] BYREF
  unsigned int v14; // [esp+124h] [ebp-4h]

  v1 = 0; /*0x895f2a*/
  if ( this && (v2 = (_DWORD *)*(this + 2)) != 0 ) /*0x895f35*/
    HavokObject = (_DWORD *)bhkCollisionWrapper_GetHavokObject(v2); /*0x895f37*/
  else
    HavokObject = 0; /*0x895f3e*/
  if ( HavokObject[2] ) /*0x895f40*/
  {
    v8 = &hkAllCdBodyPairCollector::`vftable'; /*0x895f4d*/
    v10 = &v13; /*0x895f55*/
    v12 = 0x80000010; /*0x895f59*/
    v11 = 0; /*0x895f61*/
    LOBYTE(v9) = 0; /*0x895f65*/
    v4 = *(void (__thiscall **)(_DWORD *, void ***))(*HavokObject + 0x38); /*0x895f6b*/
    v14 = 0; /*0x895f75*/
    v4(HavokObject, &v8); /*0x895f7c*/
    if ( v11 > 0 ) /*0x895f84*/
    {
      v5 = v10 + 8; /*0x895f8a*/
      v6 = v11; /*0x895f8d*/
      do /*0x895fb6*/
      {
        switch ( *(_DWORD *)(*(_DWORD *)v5 + 0x1C) & 0x3F ) /*0x895fa7*/
        {
          case 4: /*0x895fa7*/
          case 5: /*0x895fa7*/
          case 6: /*0x895fa7*/
          case 7: /*0x895fa7*/
          case 0xA: /*0x895fa7*/
          case 0xB: /*0x895fa7*/
          case 0xC: /*0x895fa7*/
          case 0x10: /*0x895fa7*/
          case 0x11: /*0x895fa7*/
            break;
          default:
            v1 = 1; /*0x895fae*/
            break; /*0x895fae*/
        }
        v5 += 0x10; /*0x895fb0*/
        --v6; /*0x895fb3*/
      }
      while ( v6 ); /*0x895fb6*/
    }
    v14 = 0xFFFFFFFF; /*0x895fbc*/
    hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector((hkAllCdBodyPairCollector *)&v8); /*0x895fc7*/
  }
  return v1; /*0x895fce*/
}
