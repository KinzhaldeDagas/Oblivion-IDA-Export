char *__thiscall sub_895060(_DWORD *this, const void **a2)
{
  _DWORD *v3; // ecx
  int HavokObject; // eax
  char *result; // eax
  int *v6; // edi
  int v7; // ecx
  int v8; // ecx
  char *v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // ecx

  if ( this && (v3 = (_DWORD *)*(this + 2)) != 0 ) /*0x89506e*/
    HavokObject = bhkCollisionWrapper_GetHavokObject(v3); /*0x895070*/
  else
    HavokObject = 0; /*0x895077*/
  result = *(char **)(HavokObject + 8); /*0x895079*/
  if ( result ) /*0x89507e*/
    v6 = *((int **)result + 0xAC); /*0x895080*/
  else
    v6 = 0; /*0x895088*/
  if ( v6 != (int *)a2 ) /*0x895090*/
  {
    if ( v6 ) /*0x895098*/
    {
      (*(void (__thiscall **)(int *))(*v6 + 0x58))(v6); /*0x8950a1*/
      sub_8B9F60((_DWORD **)this); /*0x8950a5*/
      v7 = *(this + 0xD9); /*0x8950aa*/
      if ( v7 ) /*0x8950b2*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 0x60))(v7); /*0x8950b9*/
      v8 = *(this + 0xDA); /*0x8950bb*/
      if ( v8 ) /*0x8950c3*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x60))(v8); /*0x8950ca*/
      result = (char *)(*(int (__thiscall **)(int *))(*v6 + 0x58))(v6); /*0x8950d3*/
    }
    if ( this ) /*0x8950d7*/
    {
      v9 = (char *)*(this + 2); /*0x8950d9*/
      if ( v9 ) /*0x8950de*/
      {
        result = sub_8ABDB0(v9); /*0x8950e0*/
        *((_DWORD *)result + 1) = 0; /*0x8950e5*/
      }
    }
    if ( a2 ) /*0x8950ee*/
    {
      if ( *(this + 0xD9) ) /*0x8950f4*/
      {
        if ( (*(_BYTE *)(this + 0x7D) & 1) == 0 && (*(this + 0x7D) & 0x100000) == 0 ) /*0x895111*/
        {
          bhkCharacterController_SetTargetSize((int)this, flt_A968E0); /*0x89511f*/
          sub_8912A0(this, flt_A968E0); /*0x895130*/
          bhkCharacterController_SetTargetSize((int)this, 0.0); /*0x89513d*/
        }
        (*(void (__thiscall **)(_DWORD, const void **))(*(_DWORD *)*(this + 0xD9) + 0x5C))(*(this + 0xD9), a2); /*0x89514e*/
        v10 = *(this + 0xD9); /*0x895150*/
        v11 = sub_8AEB80(0x96u, 0x96u, 0, 0x19u); /*0x895164*/
        result = (char *)sub_88BB60(a2, v10, v11); /*0x895170*/
      }
      v12 = *(this + 0xDA); /*0x895175*/
      if ( v12 ) /*0x89517d*/
        return (char *)(*(int (__thiscall **)(int, const void **))(*(_DWORD *)v12 + 0x5C))(v12, a2); /*0x895185*/
    }
  }
  return result; /*0x895187*/
}
