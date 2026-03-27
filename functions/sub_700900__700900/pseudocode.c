int __thiscall sub_700900(void *this)
{
  int (__thiscall *v2)(void *, NiTPointerMap<NiObject *,NiObject *> **); // edx
  int v3; // edi
  NiTPointerMap<NiObject *,NiObject *> *v5; // [esp+Ch] [ebp-1Ch] BYREF
  void (__thiscall ***v6)(_DWORD, int); // [esp+10h] [ebp-18h]
  unsigned int v7; // [esp+24h] [ebp-4h]

  sub_478B90(&v5);
  v2 = *(int (__thiscall **)(void *, NiTPointerMap<NiObject *,NiObject *> **))(*(_DWORD *)this + 0x18);
  v7 = 0;
  v3 = v2(this, &v5);
  (*(void (__thiscall **)(void *, NiTPointerMap<NiObject *,NiObject *> **))(*(_DWORD *)this + 0x38))(this, &v5);
  v7 = 0xFFFFFFFF;
  if ( v5 )
    (**(void (__thiscall ***)(NiTPointerMap<NiObject *,NiObject *> *, int))v5)(v5, 1);
  if ( v6 )
    (**v6)(v6, 1);
  return v3;
}
