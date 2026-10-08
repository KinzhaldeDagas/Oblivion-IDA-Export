int __thiscall TESObjectREF_GetFaceGenAnimData(Actor *this, int a2)
{
  int v2; // eax

  v2 = ((int (__thiscall *)(Actor *, int))this->vtbl->super.super.Unk_4E)(this, a2); /*0x4d66bd*/
  if ( v2 ) /*0x4d66c1*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x9C))(v2); /*0x4d66cd*/
  else
    return 0; /*0x4d66d2*/
}
