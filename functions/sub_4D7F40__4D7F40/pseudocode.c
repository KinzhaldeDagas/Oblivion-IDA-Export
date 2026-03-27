char __thiscall sub_4D7F40(int *this)
{
  int v2; // ecx
  TESObjectCELL *v4; // eax
  TESWorldSpace *WorldSpace; // eax

  v2 = *(this + 0x10);
  if ( v2 )
    return sub_4CA6F0(v2);
  v4 = (TESObjectCELL *)(*(int (__thiscall **)(int *))*(this + 6))(this + 6);
  if ( v4 && (WorldSpace = TESObjectCELL_GetWorldSpace(v4)) != 0 )
    return sub_4EF150(WorldSpace);
  else
    return 0;
}
