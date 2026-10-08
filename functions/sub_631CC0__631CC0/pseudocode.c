double __thiscall sub_631CC0(_DWORD *this, Actor *a2, int a3)
{
  int v4; // edi
  float v6; // [esp+4h] [ebp-4h]

  v6 = flt_A3D8F0; /*0x631ccc*/
  if ( !Actor::HasNPCBaseForm(a2) ) /*0x631ce1*/
  {
    if ( !a3 ) /*0x631d2e*/
      return v6; /*0x631d2e*/
LABEL_8:
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x190))(a3) ) /*0x631d3a*/
      return (float)((int (__thiscall *)(Actor *, int))a2->vtbl->GetDisposition)(a2, a3); /*0x631d55*/
    return v6; /*0x631d55*/
  }
  if ( a3 ) /*0x631ce5*/
    goto LABEL_8; /*0x631ce5*/
  if ( *(this + 0xB) ) /*0x631ce7*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xB) + 0x190))(*(this + 0xB)) ) /*0x631cf7*/
    {
      v4 = *(this + 0xB); /*0x631cfd*/
      if ( (*(_DWORD *)(v4 + 8) & 0x800) == 0 ) /*0x631d08*/
        return (float)((int (__thiscall *)(Actor *, int))a2->vtbl->GetDisposition)(a2, v4); /*0x631d29*/
    }
  }
  return v6; /*0x631d28*/
}
