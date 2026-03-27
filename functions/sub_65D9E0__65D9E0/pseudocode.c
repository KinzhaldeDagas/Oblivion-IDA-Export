bool __thiscall sub_65D9E0(void *this)
{
  TESObjectREFR **v1; // eax
  bool v2; // bl

  v1 = sub_6758E0((int)this, 0xF, 0);
  v2 = v1 != 0;
  FormHeapFree((unsigned int)v1);
  return v2;
}
