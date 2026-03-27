void __userpurge sub_444C70(
        TES *this@<ecx>,
        int ebx0@<ebx>,
        unsigned int ebp0@<ebp>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        double a8@<st3>,
        double a9@<st2>,
        double a10@<st1>,
        double a11@<st0>,
        float *a2,
        char a13)
{
  GridCellArray *gridCellArray; // ecx
  NiRenderedTexture *v15; // eax
  bool v16; // zf
  NiRenderedTexture *v17; // edi
  double v18; // st7
  double v19; // st7
  int v20; // ecx
  float *SafeFloatPointer; // eax
  double v22; // st7
  float *v23; // eax
  float v24; // [esp+8h] [ebp-24h]
  int v25; // [esp+Ch] [ebp-20h]
  int v26; // [esp+10h] [ebp-1Ch]
  int v27; // [esp+20h] [ebp-Ch]
  int v28; // [esp+24h] [ebp-8h]
  int a3; // [esp+28h] [ebp-4h] BYREF

  if ( TESDataHandler )
  {
    if ( !this->currentInteriorCell && !byte_B33A69 )
    {
      gridCellArray = this->gridCellArray;
      byte_B33A69 = 1;
      if ( a13 )
      {
        ((void (__usercall *)(GridCellArray *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))gridCellArray->Fn_02)(
          gridCellArray,
          a11,
          a10,
          a9,
          a8,
          a7,
          a6,
          a5,
          a4);
        (*(void (__thiscall **)(GridDistantArray *))(*(_DWORD *)this->gridDistantArray + 8))(this->gridDistantArray);
        v15 = CanopySadowMap;
        v16 = CanopySadowMap == 0;
        byte_B06A28 = 1;
        if ( !v16 )
        {
          v17 = v15;
          if ( !InterlockedDecrement((volatile LONG *)&v15->member) )
          {
            if ( v17 )
              v17->__vftable->super.super.super.Destructor((NiRefObject *)v17, 1);
          }
          CanopySadowMap = 0;
        }
        ((void (__thiscall *)(GridCellArray *, int, int))this->gridCellArray->Fn_04)(
          this->gridCellArray,
          this->extXCoord,
          this->extYCoord);
        v18 = ((double (__thiscall *)(GridDistantArray *, int, int))*(_DWORD *)(*(_DWORD *)this->gridDistantArray + 0x10))(
                this->gridDistantArray,
                this->extXCoord,
                this->extYCoord);
        sub_43FFF0(this, a9, a10, v18, 0, 0);
        sub_43FC20(this, 0);
        sub_4430F0(this, a9, a10, ebp0, v18, 0);
        sub_444340((int)this, v18, a8, a9, a10, a7, a6, a5, a4);
        sub_434020(ioManager, a9, a10, v18, 4);
        v27 = *(int *)a2;
        v28 = *((int *)a2 + 1);
        *(float *)&a3 = 0.0;
        GetTerrainHeight(this, a2, (float *)&a3);
        v19 = 1.0;
        v24 = *(float *)&dword_B258DC;
        v25 = qword_B258E0;
        v26 = HIDWORD(qword_B258E0);
        v20 = a3;
        byte_B2CBC0 = 0;
        DrawGrassPass_(v27, v28, v20, v24, v25, v26, 1.0);
        byte_B2CBC0 = 1;
        if ( !*(_WORD *)&this->unk51 )
        {
          SafeFloatPointer = (float *)GameSetting_GetSafeFloatPointer((int *)&flt_B33A48);
          v19 = *SafeFloatPointer;
          sub_5732D0((NiAVObject **)dword_B3A6B0, a9, a10, v19, 2, *SafeFloatPointer);
        }
        sub_441610(this);
        sub_678750(&ActorProcessManager_ptr);
        sub_675F40((int)&ActorProcessManager_ptr);
        sub_675FC0((int)&ActorProcessManager_ptr, v19);
      }
      else
      {
        ((void (__usercall *)(GridCellArray *@<ecx>, int, int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))gridCellArray->Fn_04)(
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
        v22 = ((double (__thiscall *)(GridDistantArray *, int, int))*(_DWORD *)(*(_DWORD *)this->gridDistantArray + 0x10))(
                this->gridDistantArray,
                this->extXCoord,
                this->extYCoord);
        sub_4430F0(this, a9, a10, ebp0, v22, 1);
        sub_444340((int)this, v22, a8, a9, a10, a7, a6, a5, a4);
        sub_4EF7E0((int)this->currentWorldSpace);
        v23 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
        v19 = sub_4EA6E0(*(_DWORD *)v23, *((_DWORD *)v23 + 1), *((_DWORD *)v23 + 2), 1);
      }
      ScriptRunner_RunScript((int)this, ebx0, v19, a9, a10);
      NiAVObject_UpdateNiAVObject((NiAVObject *)this->LandLOD, 0.0, 0);
      sub_43FC20(this, 0);
      sub_447130((char *)TESDataHandler);
      byte_B33A69 = 0;
    }
  }
}
