int __thiscall sub_4D7D80(_BYTE *this)
{
  BSExtraDataVtbl *v2; // eax

  v2 = sub_4203C0((ExtraDataList *)(this + 0x44));
  if ( v2 )
    sub_424C00((ExtraDataList *)&v2[8].CompareTo, (int)this);
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x8C))(this, 1);
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x90))(this, 1);
  return (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 0x150))(this, 0);
}
