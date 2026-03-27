void __thiscall sub_628330(void *this, TESObjectREFR *a2)
{
  float *v3; // eax
  TESObjectCELL *ParentCell; // eax
  double WaterHeight; // st7
  int (__thiscall *v6)(void *); // eax
  int *v7; // eax
  _DWORD v8[2]; // [esp+8h] [ebp-Ch] BYREF
  float v9; // [esp+10h] [ebp-4h]

  if ( a2 )
  {
    if ( sub_5E01B0(a2) )
    {
      (*(void (__thiscall **)(void *, TESObjectREFR *, int))(*(_DWORD *)this + 0x188))(this, a2, 1);
    }
    else
    {
      v3 = a2->vtbl->GetPos(a2);
      *(float *)v8 = *v3;
      *(float *)&v8[1] = v3[1];
      v9 = v3[2];
      ParentCell = TESObjectREFR_GetParentCell(a2);
      WaterHeight = TESObjectCELL_GetWaterHeight((ExtraDataList *)ParentCell);
      v6 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 0x410);
      v9 = WaterHeight + dbl_A3F470;
      v7 = (int *)v6(this);
      if ( v7
        || ((*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x408))(this),
            (v7 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x410))(this)) != 0) )
      {
        sub_6862C0(v7, v8);
      }
      (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 0x2C4))(this, 0x101, 1);
    }
  }
}
