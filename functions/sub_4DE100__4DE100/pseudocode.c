void __thiscall sub_4DE100(_DWORD *this, BSExtraDataVtbl *a2)
{
  BSExtraDataVtbl *v2; // eax

  v2 = a2;
  if ( *(this + 0xF) )
  {
    if ( a2 || (v2 = sub_41FFA0((ExtraDataList *)(this + 0x11))) != 0 )
      sub_497830((unsigned __int8 *)v2, (int)this);
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 0x198))(this, 0) )
      (*(void (__thiscall **)(_DWORD *))(*this + 0x164))(this);
  }
  else if ( a2 )
  {
    sub_424970((ExtraDataList *)(this + 0x11), (const void **)&a2->Destructor);
  }
}
