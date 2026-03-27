int __thiscall TESObjectREF_GetFaceGenAnimData(Actor *this, int a2)
{
  int v2; // eax

  v2 = ((int (__thiscall *)(Actor *, int))this->vtbl->super.super.Unk_4E)(this, a2);
  if ( v2 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x9C))(v2);
  else
    return 0;
}
