char __thiscall sub_895F00(_DWORD *this)
{
  char v1; // bl
  _DWORD *v2; // ecx
  _DWORD *v3; // eax
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

  v1 = 0;
  if ( this && (v2 = (_DWORD *)*(this + 2)) != 0 )
    v3 = (_DWORD *)sub_8AC0C0(v2);
  else
    v3 = 0;
  if ( v3[2] )
  {
    v8 = &hkAllCdBodyPairCollector::`vftable';
    v10 = &v13;
    v12 = 0x80000010;
    v11 = 0;
    LOBYTE(v9) = 0;
    v4 = *(void (__thiscall **)(_DWORD *, void ***))(*v3 + 0x38);
    v14 = 0;
    v4(v3, &v8);
    if ( v11 > 0 )
    {
      v5 = v10 + 8;
      v6 = v11;
      do
      {
        switch ( *(_DWORD *)(*(_DWORD *)v5 + 0x1C) & 0x3F )
        {
          case 4:
          case 5:
          case 6:
          case 7:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0x10:
          case 0x11:
            break;
          default:
            v1 = 1;
            break;
        }
        v5 += 0x10;
        --v6;
      }
      while ( v6 );
    }
    v14 = 0xFFFFFFFF;
    hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector((hkAllCdBodyPairCollector *)&v8);
  }
  return v1;
}
