// NiControllerSequence per-frame state machine. State 0 is inactive; 1 samples at full weight; 2 eases in then becomes 1; 3 eases out then deactivates normally; 4 is a transition source and deactivates with transition semantics; 5 is a transition destination that eases in then becomes 1; 6 is a morph source that synchronizes its partner through matching m: keys and becomes state 4. Uses +0x4C/+0x50 as transition interval, +0x48 as time offset, +0x54 as optional forced time, +0x58 as partner sequence, and +0x1C as base weight. When apply is true it commits local time through NiControllerSequence_AdvanceTime and calls NiControllerSequence_UpdateControlledBlocks. IDA correction: contiguous 0x6CAB79-0x6CAC3C was merged from a false def_6CA9B5 function into this body.
void __userpurge NiControllerSequence_Update(int this@<ecx>, int edi0@<edi>, float a3, float a4)
{
  int v5; // ecx
  double v6; // st7
  float *v7; // ecx
  int v8; // eax
  bool v9; // zf
  unsigned int *v10; // ecx
  double v11; // st7
  int v12; // ecx
  float easeOutTime; // [esp+4h] [ebp-14h]
  float v14; // [esp+8h] [ebp-10h]
  float v15; // [esp+10h] [ebp-8h]
  NiD3DPass *a2; // [esp+14h] [ebp-4h] BYREF
  float v17; // [esp+20h] [ebp+8h]
  float v18; // [esp+20h] [ebp+8h]
  float v19; // [esp+20h] [ebp+8h]
  float v20; // [esp+20h] [ebp+8h]

  v5 = *(_DWORD *)(this + 0x44); /*0x6ca956*/
  if ( v5 ) /*0x6ca95b*/
  {
    v6 = a3; /*0x6ca970*/
    if ( -flt_A7DEB4 == *(float *)(this + 0x48) ) /*0x6ca977*/
      *(float *)(this + 0x48) = -v6; /*0x6ca97d*/
    if ( -flt_A7DEB4 == *(float *)(this + 0x4C) ) /*0x6ca992*/
    {
      *(float *)(this + 0x4C) = a3; /*0x6ca994*/
      *(float *)(this + 0x50) = *(float *)(this + 0x50) + v6; /*0x6ca99c*/
    }
    v15 = 1.0; /*0x6ca9a7*/
    *(float *)&a2 = 1.0; /*0x6ca9ab*/
    switch ( v5 ) /*0x6ca9b5*/
    {
      case 1: /*0x6ca9b5*/
        *(float *)(this + 0x4C) = *(float *)(this + 0x3C); /*0x6cab76*/
        goto LABEL_31; /*0x6cab76*/
      case 2: /*0x6ca9b5*/
        if ( *(float *)(this + 0x50) <= v6 ) /*0x6ca9c6*/
          goto LABEL_17; /*0x6ca9c6*/
        if ( *(float *)(this + 0x4C) > v6 ) /*0x6ca9d6*/
        {
          a3 = *(float *)(this + 0x4C); /*0x6ca9dd*/
          v6 = a3; /*0x6ca9e1*/
        }
        v15 = (v6 - *(float *)(this + 0x4C)) / (*(float *)(this + 0x50) - *(float *)(this + 0x4C)); /*0x6ca9f2*/
        goto LABEL_31; /*0x6ca9f6*/
      case 3: /*0x6ca9b5*/
        if ( *(float *)(this + 0x50) <= v6 ) /*0x6caa73*/
        {
          NiControllerSequence_Deactivate((NiControllerSequence *)this, 0.0, 0); /*0x6caab0*/
          return; /*0x6caab9*/
        }
        if ( *(float *)(this + 0x4C) > v6 ) /*0x6caa7f*/
        {
          a3 = *(float *)(this + 0x4C); /*0x6caa86*/
          v6 = a3; /*0x6caa8a*/
        }
        v15 = (*(float *)(this + 0x50) - v6) / (*(float *)(this + 0x50) - *(float *)(this + 0x4C)); /*0x6caa9b*/
        goto LABEL_31; /*0x6caa9f*/
      case 4: /*0x6ca9b5*/
        goto LABEL_25;
      case 5: /*0x6ca9b5*/
        if ( *(float *)(this + 0x50) <= v6 ) /*0x6caa05*/
        {
          if ( -flt_A7DEB4 != *(float *)(this + 0x54) ) /*0x6caa48*/
          {
            *(float *)(this + 0x48) = *(float *)(this + 0x54) - v6; /*0x6caa4f*/
            *(float *)(this + 0x54) = -flt_A7DEB4; /*0x6caa5a*/
          }
LABEL_17:
          *(_DWORD *)(this + 0x44) = 1; /*0x6caa5d*/
        }
        else
        {
          if ( *(float *)(this + 0x4C) > v6 ) /*0x6caa11*/
          {
            a3 = *(float *)(this + 0x4C); /*0x6caa18*/
            v6 = a3; /*0x6caa1c*/
          }
          *(float *)&a2 = (v6 - *(float *)(this + 0x4C)) / (*(float *)(this + 0x50) - *(float *)(this + 0x4C)); /*0x6caa2d*/
        }
        goto LABEL_31; /*0x6caa31*/
      case 6: /*0x6ca9b5*/
        v7 = *(float **)(this + 0x58); /*0x6caac0*/
        *(float *)&a2 = v6 + *(float *)(this + 0x48); /*0x6caac3*/
        *(float *)&a2 = NiControllerSequence_MapTimeByMorphKeys(v7, edi0, this, *(float *)&a2); /*0x6caad4*/
        v8 = *(_DWORD *)(this + 0x58); /*0x6caad8*/
        *(float *)&a2 = *(float *)&a2 / *(float *)(v8 + 0x28); /*0x6caae2*/
        v6 = a3; /*0x6caaf2*/
        *(float *)(v8 + 0x48) = *(float *)&a2 - a3; /*0x6caaf4*/
        v9 = *(_DWORD *)(this + 0x44) == 0; /*0x6caaf7*/
        *(_DWORD *)(this + 0x44) = 4; /*0x6caafb*/
        if ( v9 ) /*0x6cab07*/
        {
          v10 = (unsigned int *)(*(_DWORD *)(this + 0x40) + 0x4C); /*0x6cab13*/
          a2 = (NiD3DPass *)this; /*0x6cab16*/
          sub_73A5E0(v10, &a2); /*0x6cab1a*/
          v6 = a3; /*0x6cab1f*/
        }
LABEL_25:
        if ( *(float *)(this + 0x50) <= v6 ) /*0x6cab2d*/
        {
          NiControllerSequence_Deactivate((NiControllerSequence *)this, 0.0, 1); /*0x6cab67*/
        }
        else
        {
          if ( *(float *)(this + 0x4C) > v6 ) /*0x6cab39*/
          {
            a3 = *(float *)(this + 0x4C); /*0x6cab40*/
            v6 = a3; /*0x6cab44*/
          }
          *(float *)&a2 = (*(float *)(this + 0x50) - v6) / (*(float *)(this + 0x50) - *(float *)(this + 0x4C)); /*0x6cab55*/
LABEL_31:
          if ( LOBYTE(a4) ) /*0x6cab7e*/
          {
            if ( -flt_A7DEB4 == *(float *)(this + 0x54) ) /*0x6cab96*/
            {
              v12 = *(_DWORD *)(this + 0x58); /*0x6cab9f*/
              if ( v12 ) /*0x6caba4*/
              {
                if ( *(float *)(v12 + 0x48) + v6 != *(float *)(v12 + 0x34) ) /*0x6cabb5*/
                {
                  easeOutTime = v6; /*0x6cabba*/
                  NiControllerSequence_Update(v12, edi0, easeOutTime, 0.0); /*0x6cabbd*/
                  v6 = a3; /*0x6cabc2*/
                }
                v17 = v6 + *(float *)(*(_DWORD *)(this + 0x58) + 0x48); /*0x6cabcf*/
                v18 = NiControllerSequence_MapTimeByMorphKeys((float *)this, edi0, *(_DWORD *)(this + 0x58), v17); /*0x6cabe0*/
                v11 = v18 / *(float *)(this + 0x28); /*0x6cabe8*/
              }
              else
              {
                v11 = v6 + *(float *)(this + 0x48); /*0x6cabed*/
              }
            }
            else
            {
              v11 = *(float *)(this + 0x54); /*0x6cab9a*/
            }
            v19 = v11; /*0x6cabf0*/
            v14 = NiControllerSequence_AdvanceTime(this, v19, 1); /*0x6cac08*/
            v20 = *(float *)(this + 0x1C) * *(float *)&a2; /*0x6cac1d*/
            NiControllerSequence_UpdateControlledBlocks((_DWORD *)this, v20, v15, v14); /*0x6cac28*/
          }
        }
        break; /*0x6cac28*/
      default:
        goto LABEL_31;
    }
  }
}
