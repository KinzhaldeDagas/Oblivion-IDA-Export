// CustomAnimSupport decode: removes an encoded-key entry from ActorAnimData.animsMap; used by scoped live-sequence cleanup.
char __thiscall sub_4708B0(_DWORD *this, int a2)
{
  int v3; // ebx
  int **v4; // edi
  _DWORD *v6; // ebx
  int *v7; // edi

  v3 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2); /*0x4708c2*/
  v4 = *(int ***)(*(this + 2) + 4 * v3); /*0x4708c7*/
  if ( !v4 ) /*0x4708cc*/
    return 0; /*0x4708cc*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, *((unsigned __int16 *)v4 + 2)) ) /*0x4708db*/
  {
    *(_DWORD *)(*(this + 2) + 4 * v3) = *v4; /*0x4708e6*/
    (*(void (__thiscall **)(_DWORD *, int **))(*this + 0x10))(this, v4); /*0x4708f1*/
    (*(void (__thiscall **)(_DWORD *, int **))(*this + 0x18))(this, v4); /*0x4708fb*/
    --*(this + 3); /*0x4708fd*/
    return 1; /*0x470907*/
  }
  v6 = v4; /*0x47090a*/
  v7 = *v4; /*0x47090c*/
  if ( !v7 ) /*0x470910*/
    return 0; /*0x47092d*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))( /*0x470923*/
             this,
             a2,
             *((unsigned __int16 *)v7 + 2)) )
  {
    v6 = v7; /*0x470925*/
    v7 = (int *)*v7; /*0x470927*/
    if ( !v7 ) /*0x47092b*/
      return 0; /*0x47092b*/
  }
  *v6 = *v7; /*0x470938*/
  (*(void (__thiscall **)(_DWORD *, int *))(*this + 0x10))(this, v7); /*0x470942*/
  (*(void (__thiscall **)(_DWORD *, int *))(*this + 0x18))(this, v7); /*0x47094c*/
  --*(this + 3); /*0x47094e*/
  return 1; /*0x470901*/
}
