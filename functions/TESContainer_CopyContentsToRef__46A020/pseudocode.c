int __thiscall TESContainer_CopyContentsToRef(_DWORD *this, void *ntint)
{
  double v2; // st5
  double v3; // st6
  _DWORD **v4; // esi
  void *v5; // edi
  int unk; // [esp+14Ch] [ebp+8h]
  int v8; // [esp+150h] [ebp+Ch]
  int v9; // [esp+154h] [ebp+10h]
  int v10; // [esp+158h] [ebp+14h]
  int v11; // [esp+15Ch] [ebp+18h]
  int v12; // [esp+160h] [ebp+1Ch]
  int v13; // [esp+164h] [ebp+20h]
  int v14; // [esp+168h] [ebp+24h]
  int v15; // [esp+16Ch] [ebp+28h]
  int v16; // [esp+170h] [ebp+2Ch]
  int v17; // [esp+174h] [ebp+30h]
  int v18; // [esp+178h] [ebp+34h]
  int v19; // [esp+17Ch] [ebp+38h]
  int v20; // [esp+180h] [ebp+3Ch]
  int v21; // [esp+184h] [ebp+40h]
  int v22; // [esp+188h] [ebp+44h]
  int v23; // [esp+18Ch] [ebp+48h]
  int v24; // [esp+190h] [ebp+4Ch]
  int v25; // [esp+194h] [ebp+50h]
  int v26; // [esp+198h] [ebp+54h]
  int v27; // [esp+19Ch] [ebp+58h]
  int v28; // [esp+1A0h] [ebp+5Ch]
  int v29; // [esp+1A4h] [ebp+60h]
  int v30; // [esp+1A8h] [ebp+64h]
  int v31; // [esp+1ACh] [ebp+68h]
  int v32; // [esp+1B0h] [ebp+6Ch]
  int v33; // [esp+1B4h] [ebp+70h]
  int v34; // [esp+1B8h] [ebp+74h]
  int v35; // [esp+1BCh] [ebp+78h]
  int v36; // [esp+1C0h] [ebp+7Ch]
  int v37; // [esp+1C4h] [ebp+80h]
  int v38; // [esp+1C8h] [ebp+84h]
  int v39; // [esp+1CCh] [ebp+88h]
  int v40; // [esp+1D0h] [ebp+8Ch]
  int v41; // [esp+1D4h] [ebp+90h]
  int v42; // [esp+1D8h] [ebp+94h]
  int v43; // [esp+1DCh] [ebp+98h]
  int v44; // [esp+1E0h] [ebp+9Ch]
  int v45; // [esp+1E4h] [ebp+A0h]
  int v46; // [esp+1E8h] [ebp+A4h]
  int v47; // [esp+1ECh] [ebp+A8h]
  int v48; // [esp+1F0h] [ebp+ACh]
  int v49; // [esp+1F4h] [ebp+B0h]
  int v50; // [esp+1F8h] [ebp+B4h]
  int v51; // [esp+1FCh] [ebp+B8h]
  int v52; // [esp+200h] [ebp+BCh]
  int v53; // [esp+204h] [ebp+C0h]
  int v54; // [esp+208h] [ebp+C4h]
  int v55; // [esp+20Ch] [ebp+C8h]
  int v56; // [esp+210h] [ebp+CCh]
  int v57; // [esp+214h] [ebp+D0h]
  int v58; // [esp+218h] [ebp+D4h]
  int v59; // [esp+21Ch] [ebp+D8h]
  int v60; // [esp+220h] [ebp+DCh]
  int v61; // [esp+224h] [ebp+E0h]
  int v62; // [esp+228h] [ebp+E4h]
  int v63; // [esp+22Ch] [ebp+E8h]
  int v64; // [esp+230h] [ebp+ECh]

  if ( !ntint )
    return TESContainer_CopyContentsToRef_::Done(0);
  v4 = (_DWORD **)(this + 2);
  v5 = OblivionDynamicCast(
         ntint,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  if ( v4 )
    return TESContainer_CopyContentsToRef_::ContentLoop_(
             v4,
             v2,
             v3,
             (int)ntint,
             unk,
             v8,
             v9,
             v10,
             v11,
             v12,
             v13,
             v14,
             v15,
             v16,
             v17,
             v18,
             v19,
             v20,
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
             v48,
             v49,
             v50,
             v51,
             v52,
             v53,
             v54,
             v55,
             v56,
             v57,
             v58,
             v59,
             v60,
             v61,
             v62,
             v63,
             v64);
  else
    return TESContainer_CopyContentsToRef_::PostAdditemMessageForPlayer(
             0,
             0,
             (int)v5,
             v2,
             v3,
             (int)ntint,
             unk,
             v8,
             v9,
             v10,
             v11,
             v12,
             v13,
             v14,
             v15,
             v16,
             v17,
             v18,
             v19,
             v20,
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
             v48,
             v49,
             v50,
             v51,
             v52,
             v53,
             v54,
             v55,
             v56,
             v57,
             v58,
             v59,
             v60,
             v61,
             v62,
             v63);
}
