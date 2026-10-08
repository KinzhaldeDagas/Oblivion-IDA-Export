void __userpurge sub_444C70(
        TES *this@<ecx>,
        unsigned int ebx0@<ebx>,
        TESObjectREFR *ebp0@<ebp>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        double a8@<st3>,
        double a9@<st2>,
        double a10@<st1>,
        double a11@<st0>,
        MobileObject *a12@<edi>,
        float *a2,
        char a14)
{
  GridCellArray *gridCellArray; // ecx
  void *v16; // eax
  bool v17; // zf
  double v18; // st7
  double v19; // st7
  int v20; // ecx
  float *SafeFloatPointer; // eax
  float *v22; // eax
  float x; // [esp+8h] [ebp-24h]
  int y_low; // [esp+Ch] [ebp-20h]
  int z_low; // [esp+10h] [ebp-1Ch]
  int v26; // [esp+20h] [ebp-Ch]
  int v27; // [esp+24h] [ebp-8h]
  int a3; // [esp+28h] [ebp-4h] BYREF

  if ( g_TESDataHandler ) /*0x444c73*/
  {
    if ( !this->currentInteriorCell && !unk_B33A69 ) /*0x444c8e*/
    {
      gridCellArray = this->gridCellArray; /*0x444ca0*/
      unk_B33A69 = 1; /*0x444ca3*/
      if ( a14 ) /*0x444caa*/
      {
        ((void (__usercall *)(GridCellArray *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))gridCellArray->Fn_02)( /*0x444cb5*/
          gridCellArray,
          a11,
          a10,
          a9,
          a8,
          a7,
          a6,
          a5,
          a4);
        (*(void (__thiscall **)(GridDistantArray *))(*(_DWORD *)this->gridDistantArray + 8))(this->gridDistantArray); /*0x444cbf*/
        v16 = g_CanopyShadowMap; /*0x444cc1*/
        v17 = g_CanopyShadowMap == 0; /*0x444cc6*/
        g_bCanopyShadowMapPending = 1; /*0x444cc8*/
        if ( !v17 ) /*0x444ccf*/
        {
          a12 = (MobileObject *)v16; /*0x444cd1*/
          if ( !InterlockedDecrement((volatile LONG *)v16 + 1) ) /*0x444cd7*/
          {
            if ( a12 ) /*0x444ce3*/
              ((void (__thiscall *)(MobileObject *, int))a12->vtbl->super.super.super.InitializeComponent)(a12, 1); /*0x444ced*/
          }
          g_CanopyShadowMap = 0; /*0x444cef*/
        }
        ((void (__thiscall *)(GridCellArray *, int, int))this->gridCellArray->Fn_04)( /*0x444d09*/
          this->gridCellArray,
          this->extXCoord,
          this->extYCoord);
        v18 = ((double (__thiscall *)(GridDistantArray *, int, int))*(_DWORD *)(*(_DWORD *)this->gridDistantArray + 0x10))( /*0x444d1b*/
                this->gridDistantArray,
                this->extXCoord,
                this->extYCoord);
        sub_43FFF0(this, a9, a10, v18, 0, 0); /*0x444d23*/
        sub_43FC20(this, 0); /*0x444d2c*/
        sub_4430F0(this, a9, a10, (unsigned int)ebp0, v18, 0); /*0x444d35*/
        sub_444340((int)this, v18, a8, a9, a10, a7, a6, a5, a4); /*0x444d3c*/
        sub_434020(MEMORY[0xB33A10], a9, a10, v18, 4); /*0x444d49*/
        v26 = *(int *)a2; /*0x444d58*/
        v27 = *((int *)a2 + 1); /*0x444d61*/
        *(float *)&a3 = 0.0; /*0x444d69*/
        GetTerrainHeight(this, a2, (float *)&a3); /*0x444d6d*/
        v19 = 1.0; /*0x444d72*/
        x = stru_B258DC.x; /*0x444d89*/
        y_low = LODWORD(stru_B258DC.y); /*0x444d91*/
        z_low = LODWORD(stru_B258DC.z); /*0x444d98*/
        v20 = a3; /*0x444da6*/
        byte_B2CBC0 = 0; /*0x444dad*/
        DrawGrassPass_(v26, v27, v20, x, y_low, z_low, 1.0); /*0x444db7*/
        byte_B2CBC0 = 1; /*0x444dbf*/
        if ( !*(_WORD *)&this->unk51 ) /*0x444dc6*/
        {
          SafeFloatPointer = (float *)GameSetting_GetSafeFloatPointer((int *)flt_B33A48); /*0x444dd7*/
          v19 = *SafeFloatPointer; /*0x444ddc*/
          sub_5732D0((NiNode **)unk_B3A6B0, a9, a10, v19, 2, *SafeFloatPointer); /*0x444dea*/
        }
        sub_441610(this); /*0x444df1*/
        sub_678750((int)&qword_B3BB2C[0x75], ebx0, ebp0, a12, (int)this, a9, a10, v19); /*0x444dfb*/
        sub_675F40((int)&qword_B3BB2C[0x75]); /*0x444e05*/
        sub_675FC0((int)&qword_B3BB2C[0x75], v19); /*0x444e0f*/
      }
      else
      {
        ((void (__usercall *)(GridCellArray *@<ecx>, int, int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))gridCellArray->Fn_04)( /*0x444e23*/
          gridCellArray,
          this->extXCoord,
          this->extYCoord,
          a11,
          a10,
          a9,
          a8,
          a7,
          a6,
          a5,
          a4);
        v19 = ((double (__thiscall *)(GridDistantArray *, int, int))*(_DWORD *)(*(_DWORD *)this->gridDistantArray + 0x10))( /*0x444e35*/
                this->gridDistantArray,
                this->extXCoord,
                this->extYCoord);
        sub_4430F0(this, a9, a10, (unsigned int)ebp0, v19, 1); /*0x444e3b*/
        sub_444340((int)this, v19, a8, a9, a10, a7, a6, a5, a4); /*0x444e42*/
        TESWorldSpace_GetRootTerrainLODQuadMap((int)this->currentWorldSpace); /*0x444e4a*/
        v22 = reference->vtbl->super.super.super.GetPos(reference); /*0x444e5d*/
        DistantLOD_UpdateLandLODAtPosition(*(_DWORD *)v22, v22[1], *((_DWORD *)v22 + 2), 1); /*0x444e76*/
      }
      ScriptRunner_RunScript((int)this, ebx0, v19, a9, a10); /*0x444e80*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)this->LandLOD, 0.0, 0); /*0x444e90*/
      sub_43FC20(this, 0); /*0x444e99*/
      sub_447130((char *)g_TESDataHandler); /*0x444ea4*/
      unk_B33A69 = 0; /*0x444ea9*/
    }
  }
}
