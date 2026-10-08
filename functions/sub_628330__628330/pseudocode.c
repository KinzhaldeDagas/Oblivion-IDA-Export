void __thiscall sub_628330(void *this, TESObjectREFR *a2)
{
  float *v3; // eax
  ExtraDataList *DwordAtOffset40; // eax
  double WaterHeight; // st7
  int (__thiscall *v6)(void *); // eax
  int *v7; // eax
  _DWORD v8[2]; // [esp+8h] [ebp-Ch] BYREF
  float v9; // [esp+10h] [ebp-4h]

  if ( a2 ) /*0x62833d*/
  {
    if ( sub_5E01B0(a2) ) /*0x628345*/
    {
      (*(void (__thiscall **)(void *, TESObjectREFR *, int))(*(_DWORD *)this + 0x188))(this, a2, 1); /*0x6283ea*/
    }
    else
    {
      v3 = a2->vtbl->GetPos(a2); /*0x62835c*/
      *(float *)v8 = *v3; /*0x628360*/
      *(float *)&v8[1] = v3[1]; /*0x628367*/
      v9 = v3[2]; /*0x628370*/
      DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(a2); /*0x628374*/
      WaterHeight = TESObjectCELL_GetWaterHeight(DwordAtOffset40); /*0x62837b*/
      v6 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 0x410); /*0x628388*/
      v9 = WaterHeight + dbl_A3F470; /*0x628390*/
      v7 = (int *)v6(this); /*0x628394*/
      if ( v7 /*0x6283b4*/
        || ((*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x408))(this),
            (v7 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x410))(this)) != 0) )
      {
        sub_6862C0(v7, v8); /*0x6283bd*/
      }
      (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 0x2C4))(this, 0x101, 1); /*0x6283d3*/
    }
  }
}
