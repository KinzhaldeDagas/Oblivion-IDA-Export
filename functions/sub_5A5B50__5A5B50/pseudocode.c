void __userpurge sub_5A5B50(Tile **this@<ecx>, int a2@<ebx>, int edi0@<edi>, int a4)
{
  double v5; // st7
  bool v6; // c0
  bool v7; // c3
  double v8; // st7
  double v9; // st7
  double v10; // st7
  bool v11; // c0
  bool v12; // c3
  double v13; // st7
  double v14; // st7
  double v15; // st7
  bool v16; // c0
  bool v17; // c3
  double v18; // st7
  double v19; // st7
  float a3; // [esp+8h] [ebp-10h]
  float a3a; // [esp+8h] [ebp-10h]
  float a3b; // [esp+8h] [ebp-10h]
  double v23; // [esp+10h] [ebp-8h]
  double v24; // [esp+10h] [ebp-8h]
  float v25; // [esp+10h] [ebp-8h]
  double v26; // [esp+10h] [ebp-8h]
  double v27; // [esp+10h] [ebp-8h]
  float v28; // [esp+10h] [ebp-8h]
  double AVModifierf; // [esp+10h] [ebp-8h]
  double v30; // [esp+10h] [ebp-8h]
  float v31; // [esp+10h] [ebp-8h]
  int v32; // [esp+1Ch] [ebp+4h]
  float v33; // [esp+1Ch] [ebp+4h]
  int v34; // [esp+1Ch] [ebp+4h]
  float v35; // [esp+1Ch] [ebp+4h]
  int v36; // [esp+1Ch] [ebp+4h]
  float v37; // [esp+1Ch] [ebp+4h]

  switch ( a4 ) /*0x5a5b5d*/
  {
    case 8: /*0x5a5b5d*/
      AVModifierf = Player_GetAVModifierf((float *)reference, 0, 8); /*0x5a5d34*/
      v15 = (double)Actor_GetBaseCalcAVi((int *)reference, a2, edi0, (int)this, 8) + AVModifierf; /*0x5a5d4d*/
      v16 = v15 > 0.0; /*0x5a5d53*/
      v17 = 0.0 == v15; /*0x5a5d53*/
      v18 = 0.0; /*0x5a5d57*/
      if ( v16 || v17 ) /*0x5a5d59*/
      {
        v30 = Player_GetAVModifierf((float *)reference, 0, 8); /*0x5a5d6f*/
        v18 = (double)Actor_GetBaseCalcAVi((int *)reference, a2, edi0, (int)this, 8) + v30; /*0x5a5d88*/
      }
      v31 = v18; /*0x5a5d8c*/
      v19 = 0.0; /*0x5a5d90*/
      if ( 0.0 != v31 ) /*0x5a5d9b*/
      {
        if ( reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Health) >= 0 ) /*0x5a5db3*/
          v36 = reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Health); /*0x5a5dd1*/
        else
          v36 = 0; /*0x5a5db5*/
        v37 = (double)v36 / v31; /*0x5a5ddd*/
        v19 = v37; /*0x5a5de1*/
      }
      a3b = v19; /*0x5a5de9*/
      Tile_SetFloat(*(this + 0xB), 0xFAEu, a3b); /*0x5a5df1*/
      break;
    case 9: /*0x5a5b5d*/
      v26 = Player_GetAVModifierf((float *)reference, 0, 9); /*0x5a5c5c*/
      v10 = (double)Actor_GetBaseCalcAVi((int *)reference, a2, edi0, (int)this, 9) + v26; /*0x5a5c75*/
      v11 = v10 > 0.0; /*0x5a5c7b*/
      v12 = 0.0 == v10; /*0x5a5c7b*/
      v13 = 0.0; /*0x5a5c7f*/
      if ( v11 || v12 ) /*0x5a5c81*/
      {
        v27 = Player_GetAVModifierf((float *)reference, 0, 9); /*0x5a5c97*/
        v13 = (double)Actor_GetBaseCalcAVi((int *)reference, a2, edi0, (int)this, 9) + v27; /*0x5a5cb0*/
      }
      v28 = v13; /*0x5a5cb4*/
      v14 = 0.0; /*0x5a5cb8*/
      if ( 0.0 != v28 ) /*0x5a5cc3*/
      {
        if ( reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Magicka) >= 0 ) /*0x5a5cdb*/
          v34 = reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Magicka); /*0x5a5cf9*/
        else
          v34 = 0; /*0x5a5cdd*/
        v35 = (double)v34 / v28; /*0x5a5d05*/
        v14 = v35; /*0x5a5d09*/
      }
      a3a = v14; /*0x5a5d11*/
      Tile_SetFloat(*(this + 0xC), 0xFAEu, a3a); /*0x5a5d19*/
      break;
    case 0xA: /*0x5a5b5d*/
      v23 = Player_GetAVModifierf((float *)reference, 0, 0xA); /*0x5a5b84*/
      v5 = (double)Actor_GetBaseCalcAVi((int *)reference, a2, edi0, (int)this, 0xA) + v23; /*0x5a5b9d*/
      v6 = v5 > 0.0; /*0x5a5ba3*/
      v7 = 0.0 == v5; /*0x5a5ba3*/
      v8 = 0.0; /*0x5a5ba7*/
      if ( v6 || v7 ) /*0x5a5ba9*/
      {
        v24 = Player_GetAVModifierf((float *)reference, 0, 0xA); /*0x5a5bbf*/
        v8 = (double)Actor_GetBaseCalcAVi((int *)reference, a2, edi0, (int)this, 0xA) + v24; /*0x5a5bd8*/
      }
      v25 = v8; /*0x5a5bdc*/
      v9 = 0.0; /*0x5a5be0*/
      if ( 0.0 != v25 ) /*0x5a5beb*/
      {
        if ( reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Fatigue) >= 0 ) /*0x5a5c03*/
          v32 = reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Fatigue); /*0x5a5c21*/
        else
          v32 = 0; /*0x5a5c05*/
        v33 = (double)v32 / v25; /*0x5a5c2d*/
        v9 = v33; /*0x5a5c31*/
      }
      a3 = v9; /*0x5a5c39*/
      Tile_SetFloat(*(this + 0xD), 0xFAEu, a3); /*0x5a5c41*/
      break;
  }
}
