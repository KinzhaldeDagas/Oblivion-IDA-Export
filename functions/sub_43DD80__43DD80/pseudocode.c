void __thiscall sub_43DD80(_DWORD **this)
{
  int v2; // eax
  void *v3; // edi

  v2 = (*(int (__thiscall **)(_DWORD))(**(this + 8) + 0x170))(*(this + 8));
  if ( v2 )
    v3 = (void *)(v2 + 0xAC);
  else
    v3 = 0;
  sub_43D000((int *)ModelLoaderPtr, v3, BYTE2(*(this + 4)), (volatile LONG *)this, (int)*(this + 8), 1, 0);
  sub_43CDE0((int *)ModelLoaderPtr, v3, BYTE2(*(this + 4)), (volatile LONG *)this, (TESObjectREFR *)*(this + 8));
  sub_5E4DD0(*(this + 8));
  sub_43C9B0(this);
}
