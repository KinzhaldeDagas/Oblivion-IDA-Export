void __userpurge sub_647A80(int *this@<ecx>, double a2@<st1>, Actor *a3)
{
  TargetData **v4; // edi
  int v5; // eax
  char v6; // al
  float *v7; // eax
  double v8; // st7
  unsigned int v9; // ebp
  unsigned int v10; // eax
  _BYTE v11[12]; // [esp+14h] [ebp-Ch] BYREF

  v4 = (TargetData **)(*(int (__thiscall **)(int *))(*this + 0x184))(this);
  v5 = *(this + 0xB);
  if ( !v5 || (*(_DWORD *)(v5 + 8) & 0x800) != 0 )
  {
    (*(void (__thiscall **)(int *, Actor *, int))(*this + 0x188))(this, a3, 2);
  }
  else if ( (*(_DWORD *)(v5 + 8) & 0x20) != 0 )
  {
    sub_566870(v4, (TESForm *)v5, 1);
    (*(void (__thiscall **)(int *, Actor *, int))(*this + 0x188))(this, a3, 2);
  }
  else if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x198))(v5, 1) || *(this + 0x11) )
  {
    sub_566DC0((TESPackage *)v4, flt_A30634, a2, a3, 0, flt_A30634);
    if ( v6 )
    {
      if ( TesObjectREF_GetDistance((TESObjectREFR *)a3, (TESObjectREFR *)*(this + 0xB), 0) != dbl_A3A5B0 )
      {
        v7 = (float *)sub_566B30((TESPackage *)v4, (int)v11, a3);
        v8 = sub_4D7E30((float *)*(this + 0xB), v7);
        v9 = Double_To_SInt32(v8);
        sub_566DB0(v4);
        if ( v9 <= v10 )
          (*(void (__thiscall **)(int *, Actor *, int))(*this + 0x188))(this, a3, 1);
      }
    }
    else
    {
      (*(void (__thiscall **)(int *, Actor *, unsigned int))(*this + 0x188))(this, a3, 0xFFFFFFFF);
    }
  }
  else
  {
    sub_566870(v4, (TESForm *)*(this + 0xB), 1);
    ((void (__thiscall *)(Actor *, _DWORD))a3->vtbl->Unk_BE)(a3, *(this + 0xB));
  }
}
