char __thiscall sub_52DED0(int *this, int *a2, int *a3, int a4, char a5, int a6)
{
  BSFaceGenAnimationData *v6; // ebp
  BSFaceGenAnimationData *v7; // eax
  BSFaceGenNiNode *v8; // eax
  NiObjectNET *v9; // eax
  BSFaceGenNiNode *v10; // eax
  NiObjectNET *v11; // eax
  int v13; // [esp+0h] [ebp-ECh]
  int v14; // [esp+4h] [ebp-E8h]
  _DWORD *v15; // [esp+8h] [ebp-E4h]
  int v16; // [esp+Ch] [ebp-E0h]
  int v17; // [esp+10h] [ebp-DCh]
  int v18; // [esp+14h] [ebp-D8h]
  int v20[3]; // [esp+1Ch] [ebp-D0h] BYREF
  char v21; // [esp+28h] [ebp-C4h]
  int v22; // [esp+2Ch] [ebp-C0h]
  char v23; // [esp+30h] [ebp-BCh]
  int v24; // [esp+34h] [ebp-B8h]
  char v25; // [esp+38h] [ebp-B4h]
  int v26; // [esp+3Ch] [ebp-B0h]
  int v27; // [esp+40h] [ebp-ACh]
  int v28; // [esp+44h] [ebp-A8h]
  char v29; // [esp+48h] [ebp-A4h]
  int v30; // [esp+4Ch] [ebp-A0h]
  int v31; // [esp+50h] [ebp-9Ch]
  int v32; // [esp+54h] [ebp-98h]
  int v33; // [esp+58h] [ebp-94h]
  int v34; // [esp+5Ch] [ebp-90h]
  int v35; // [esp+60h] [ebp-8Ch]
  int v36; // [esp+64h] [ebp-88h]
  int v37; // [esp+68h] [ebp-84h]
  int v38; // [esp+6Ch] [ebp-80h]
  int v39; // [esp+70h] [ebp-7Ch]
  int v40; // [esp+74h] [ebp-78h]
  int v41; // [esp+78h] [ebp-74h]
  int v42; // [esp+7Ch] [ebp-70h]
  int v43; // [esp+80h] [ebp-6Ch]
  char v44; // [esp+84h] [ebp-68h]
  int v45; // [esp+88h] [ebp-64h]
  int v46; // [esp+8Ch] [ebp-60h]
  int v47; // [esp+90h] [ebp-5Ch]
  int v48; // [esp+94h] [ebp-58h]
  int v49; // [esp+E8h] [ebp-4h]

  v6 = 0;
  *a2 = 0;
  *a3 = 0;
  v7 = (BSFaceGenAnimationData *)FormHeapAlloc(0x1E0u);
  v49 = 0;
  if ( v7 )
    v6 = BSFaceGenAnimationData::BSFaceGenAnimationData(v7);
  v8 = (BSFaceGenNiNode *)FormHeapAlloc(0x118u);
  v49 = 1;
  if ( v8 )
    v9 = (NiObjectNET *)BSFaceGenNiNode::BSFaceGenNiNode(v8);
  else
    v9 = 0;
  v49 = 0xFFFFFFFF;
  *a2 = (int)v9;
  NiObjectNET_SetName(v9, "BSFaceGenNiNodeBiped");
  (*(void (__thiscall **)(_DWORD, BSFaceGenAnimationData *))(*(_DWORD *)*a2 + 0xA0))(*a2, v6);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*a2 + 0xB0))(*a2, 1);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*a2 + 0xB8))(*a2, 1);
  v10 = (BSFaceGenNiNode *)FormHeapAlloc(0x118u);
  v18 = (int)v10;
  v49 = 2;
  if ( v10 )
    v11 = (NiObjectNET *)BSFaceGenNiNode::BSFaceGenNiNode(v10);
  else
    v11 = 0;
  v49 = 0xFFFFFFFF;
  *a3 = (int)v11;
  NiObjectNET_SetName(v11, "BSFaceGenNiNodeSkinned");
  (*(void (__thiscall **)(_DWORD, BSFaceGenAnimationData *))(*(_DWORD *)*a3 + 0xA0))(*a3, v6);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*a3 + 0xB0))(*a3, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*a3 + 0xB8))(*a3, 0);
  FaceGenHeadParameters_Ctor(v20);
  v49 = 3;
  TESRace_GetFaceGenHeadParameters(this, a4, (int)v20);
  sub_555A80(
    (int)a2,
    (int)a3,
    (int)v20,
    a6,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    (int)this,
    v20[0],
    v20[1],
    (BSFaceGenModelMap *)v20[2],
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( a5 )
  {
    BSFaceGen_DoSomethingWithFaceGenNode(*a2, (_DWORD **)v20);
    BSFaceGen_DoSomethingWithFaceGenNode(*a3, (_DWORD **)v20);
  }
  if ( a4 )
  {
    if ( *(_DWORD *)(a4 + 0xC) == 7 )
    {
      *(_BYTE *)(*a2 + 0x111) = 1;
      *(_BYTE *)(*a3 + 0x111) = 1;
    }
  }
  v49 = 0xFFFFFFFF;
  FaceGenHeadParameters_Dtor((unsigned int *)v20);
  return 1;
}
