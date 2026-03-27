int __usercall sub_578CD0@<eax>(double a1@<st2>, double a2@<st1>)
{
  InterfaceManager *Singleton; // ecx
  int v5; // ebp
  volatile LONG *v6; // eax
  NiNode *v7; // eax
  volatile LONG *v8; // eax
  ShadowSceneNode *v9; // eax
  volatile LONG *v10; // eax
  BSShaderProperty *v11; // esi
  NiNode *v12; // ecx
  volatile LONG *v13; // eax
  NiObjectNET *v14; // eax
  float *v15; // eax
  float v16; // ecx
  float v17; // edx
  double v18; // st4
  float v19; // ecx
  float *v20; // eax
  float v21; // edx
  float v22; // ecx
  double v23; // st4
  double v24; // st4
  float v25; // edx
  volatile LONG *v26; // esi
  float v28; // [esp+0h] [ebp-60h]
  float v29; // [esp+4h] [ebp-5Ch]
  float v30; // [esp+8h] [ebp-58h]
  float v31; // [esp+8h] [ebp-58h]
  volatile LONG *v32; // [esp+20h] [ebp-40h] BYREF
  float v33; // [esp+24h] [ebp-3Ch]
  float v34; // [esp+28h] [ebp-38h]
  float v35; // [esp+2Ch] [ebp-34h]
  float v36[11]; // [esp+30h] [ebp-30h] BYREF
  int v37; // [esp+5Ch] [ebp-4h]

  Singleton = InterfaceManager_GetSingleton(0, 1);
  v37 = 0xFFFFFFFF;
  LODWORD(v36[0xA]) = &loc_9BEA2C;
  v36[9] = *(float *)&NtCurrentTeb()->Tib.ExceptionList;
  v5 = (int)Singleton;
  v6 = (volatile LONG *)FormHeapAlloc(0xDCu);
  v32 = v6;
  v37 = 0;
  if ( v6 )
    v7 = NiNode::NiNode((NiNode *)v6, 0);
  else
    v7 = 0;
  v30 = flt_A68FCC;
  v37 = 0xFFFFFFFF;
  *(_DWORD *)(v5 + 0x60) = v7;
  sub_711580(v36, 0.0, 0.0, v30);
  qmemcpy((void *)(*(_DWORD *)(v5 + 0x60) + 0x30), v36, 0x24u);
  v8 = (volatile LONG *)FormHeapAlloc(0x130u);
  v32 = v8;
  v37 = 1;
  if ( v8 )
    v9 = ShadowSceneNode::ShadowSceneNode((ShadowSceneNode *)v8);
  else
    v9 = 0;
  *(_DWORD *)(v5 + 0x64) = v9;
  v37 = 0xFFFFFFFF;
  *((_BYTE *)v9 + 0x11C) = 1;
  sub_7B4270(1, (int)v9);
  v10 = (volatile LONG *)FormHeapAlloc(0x1Cu);
  v11 = (BSShaderProperty *)v10;
  v32 = v10;
  v37 = 2;
  if ( v10 )
  {
    NiObjectNET::NiObjectNET((NiObjectNET *)v10);
    v11->vtbl = &NiAlphaProperty::`vftable';
    v11->member.super.flags = 0xEC;
    v11->member.super.pad01A[0] = 0;
  }
  else
  {
    v11 = 0;
  }
  v11->member.super.flags &= ~1u;
  v12 = *(NiNode **)(v5 + 0x64);
  v37 = 0xFFFFFFFF;
  sub_405680(v12, v11);
  v13 = (volatile LONG *)FormHeapAlloc(0x114u);
  v32 = v13;
  v37 = 3;
  if ( v13 )
    v14 = (NiObjectNET *)sub_719760((NiLight *)v13);
  else
    v14 = 0;
  v37 = 0xFFFFFFFF;
  *(_DWORD *)(v5 + 0x18) = v14;
  NiObjectNET_SetName(v14, "PlayerSceneLight");
  v15 = *(float **)(v5 + 0x18);
  v33 = flt_B135E0;
  v16 = v33;
  v34 = flt_B135E8;
  v17 = v34;
  v18 = flt_B135F0;
  ++*((_DWORD *)v15 + 0x2E);
  v15[0x3B] = v16;
  v35 = v18;
  v19 = v35;
  v15[0x3C] = v17;
  v15[0x3D] = v19;
  v20 = *(float **)(v5 + 0x18);
  v33 = flt_B135C8;
  v21 = v33;
  v34 = flt_B135D0;
  v22 = v34;
  v23 = flt_B135D8;
  ++*((_DWORD *)v20 + 0x2E);
  v35 = v23;
  v24 = flt_A68FB4;
  v20[0x38] = v21;
  v25 = v35;
  v31 = v24;
  v20[0x39] = v22;
  v29 = v24;
  v28 = v24;
  v20[0x3A] = v25;
  sub_711580(v36, v28, v29, v31);
  qmemcpy((void *)(*(_DWORD *)(v5 + 0x18) + 0x30), v36, 0x24u);
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v5 + 0x64) + 0x84))(
    *(_DWORD *)(v5 + 0x64),
    *(_DWORD *)(v5 + 0x18),
    1);
  sub_7C5850(*(_DWORD **)(v5 + 0x64), *(_DWORD *)(v5 + 0x18));
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(v5 + 4) + 0x84))(
    *(_DWORD *)(v5 + 4),
    *(_DWORD *)(v5 + 0x64),
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(v5 + 0x64) + 0x84))(
    *(_DWORD *)(v5 + 0x64),
    *(_DWORD *)(v5 + 0x60),
    0);
  sub_708560(*(_DWORD **)(v5 + 0x60), &v32, 2);
  if ( v32 )
  {
    v26 = v32;
    if ( !InterlockedDecrement(v32 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v26)(v26, 1);
  }
  *(_WORD *)(*(_DWORD *)(v5 + 0x60) + 0x18) |= 1u;
  *(_BYTE *)(v5 + 8) = 1;
  return sub_57D480(v5, 1, v5, a1, a2);
}
