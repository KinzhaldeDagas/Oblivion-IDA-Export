char __thiscall sub_4D8F20(void *this, NiObjectNET *a2)
{
  bool v2; // bl
  NiObject *v4; // eax
  bool v5; // zf

  v2 = 0; /*0x4d8f27*/
  if ( !a2 /*0x4d8f4d*/
    || !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this)
    || *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x18 )
  {
    return 0; /*0x4d8f9e*/
  }
  v4 = sub_6FA970(a2); /*0x4d8f50*/
  if ( v4 ) /*0x4d8f5a*/
    v2 = (v4[1].members.m_uiRefCount & 8) != 0; /*0x4d8f64*/
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x1C ) /*0x4d8f76*/
    v5 = sub_5368B0((int)a2) == 0; /*0x4d8f81*/
  else
    v5 = !v2; /*0x4d8f85*/
  if ( v5 ) /*0x4d8f87*/
    return 0; /*0x4d8fa6*/
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x48))(this, 8); /*0x4d8f92*/
  return 1; /*0x4d8f94*/
}
