unsigned int __thiscall sub_705860(char **this, int a2, int a3)
{
  char **v3; // edi
  int v4; // ebp
  unsigned int result; // eax
  unsigned int v6; // ebx
  int v7; // esi
  float *v8; // edi
  double v9; // st7
  bool v10; // cc
  _WORD *v11; // eax
  _WORD *v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // ebp
  int v16; // ebx
  int v17; // esi
  int v18; // edi
  int v19; // edi
  int v20; // esi
  unsigned int v21; // eax
  _WORD *v23; // [esp+1Ch] [ebp-10h] BYREF
  int v24; // [esp+28h] [ebp-4h]
  unsigned int v25; // [esp+34h] [ebp+8h]
  unsigned int i; // [esp+34h] [ebp+8h]

  v3 = this; /*0x705887*/
  v4 = a2; /*0x705891*/
  sub_700A60(this, (NiObjectNET *)a2, a3); /*0x705897*/
  *(_WORD *)(a2 + 0x18) = *((_WORD *)v3 + 0xC); /*0x7058a0*/
  result = *((unsigned __int16 *)v3 + 0x13); /*0x7058a4*/
  v6 = 0; /*0x7058a8*/
  v25 = result; /*0x7058ac*/
  if ( *((_WORD *)v3 + 0x13) ) /*0x7058a4*/
  {
    do /*0x7059ca*/
    {
      if ( *(_DWORD *)&v3[8][4 * v6] ) /*0x7058c0*/
      {
        if ( v6 == 5 ) /*0x7058cd*/
        {
          v7 = FormHeapAlloc(0x28u); /*0x7058da*/
          v23 = (_WORD *)v7; /*0x7058df*/
          v24 = 0; /*0x7058e5*/
          if ( v7 ) /*0x7058ed*/
          {
            v8 = *((float **)v3[8] + 5); /*0x7058f2*/
            sub_704190((_WORD *)v7, (int)v8); /*0x7058fb*/
            v4 = a2; /*0x705900*/
            *(_DWORD *)v7 = &NiTexturingProperty::BumpMap::`vftable'; /*0x705904*/
            *(float *)(v7 + 0x10) = v8[4]; /*0x70590d*/
            *(float *)(v7 + 0x14) = v8[5]; /*0x705913*/
            *(float *)(v7 + 0x18) = v8[6]; /*0x705919*/
            *(float *)(v7 + 0x1C) = v8[7]; /*0x70591f*/
            *(float *)(v7 + 0x20) = v8[8]; /*0x705925*/
            v9 = v8[9]; /*0x705928*/
            v3 = this; /*0x70592b*/
            *(float *)(v7 + 0x24) = v9; /*0x70592f*/
          }
          else
          {
            v7 = 0; /*0x705934*/
          }
          v10 = *(_WORD *)(v4 + 0x24) <= 5u; /*0x705936*/
          v23 = (_WORD *)v7; /*0x70593b*/
          v24 = 0xFFFFFFFF; /*0x705942*/
          if ( v10 ) /*0x70594a*/
            NiTArray_SetSize((unsigned __int16 *)(v4 + 0x1C), *(unsigned __int16 *)(v4 + 0x2A) + 5); /*0x705956*/
          result = NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(v4 + 0x1C), 5u, &v23); /*0x705962*/
        }
        else
        {
          v11 = (_WORD *)FormHeapAlloc(0x10u); /*0x705966*/
          v23 = v11; /*0x70596e*/
          v24 = 1; /*0x705974*/
          if ( v11 ) /*0x70597c*/
            v12 = sub_704190(v11, *(_DWORD *)&v3[8][4 * v6]); /*0x705988*/
          else
            v12 = 0; /*0x70598f*/
          v23 = v12; /*0x705994*/
          v13 = *(unsigned __int16 *)(v4 + 0x24); /*0x705998*/
          v24 = 0xFFFFFFFF; /*0x70599e*/
          if ( v6 >= v13 ) /*0x7059a6*/
            NiTArray_SetSize((unsigned __int16 *)(v4 + 0x1C), v6 + *(unsigned __int16 *)(v4 + 0x2A)); /*0x7059b1*/
          result = NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(v4 + 0x1C), v6, &v23); /*0x7059be*/
        }
      }
      ++v6; /*0x7059c3*/
    }
    while ( v6 < v25 ); /*0x7059ca*/
  }
  if ( v3[0xB] ) /*0x7059d0*/
  {
    if ( !*(_DWORD *)(v4 + 0x2C) ) /*0x7059da*/
    {
      v14 = FormHeapAlloc(0x10u); /*0x7059e2*/
      if ( v14 ) /*0x7059ee*/
      {
        *(_DWORD *)v14 = &NiTArray<NiTexturingProperty::ShaderMap *>::`vftable'; /*0x7059f0*/
        *(_WORD *)(v14 + 8) = 0; /*0x7059f6*/
        *(_WORD *)(v14 + 0xE) = 1; /*0x7059fa*/
        *(_WORD *)(v14 + 0xA) = 0; /*0x705a00*/
        *(_WORD *)(v14 + 0xC) = 0; /*0x705a04*/
        *(_DWORD *)(v14 + 4) = 0; /*0x705a08*/
      }
      else
      {
        v14 = 0; /*0x705a0d*/
      }
      v24 = 0xFFFFFFFF; /*0x705a0f*/
      *(_DWORD *)(v4 + 0x2C) = v14; /*0x705a17*/
    }
    result = *((unsigned __int16 *)v3[0xB] + 5); /*0x705a1d*/
    v15 = 0; /*0x705a21*/
    for ( i = result; v15 < result; ++v15 ) /*0x705a1d*/
    {
      v16 = 4 * v15; /*0x705a35*/
      if ( *(_DWORD *)(4 * v15 + *((_DWORD *)v3[0xB] + 1)) ) /*0x705a3c*/
      {
        v17 = FormHeapAlloc(0x14u); /*0x705a4d*/
        v23 = (_WORD *)v17; /*0x705a52*/
        v24 = 3; /*0x705a58*/
        if ( v17 ) /*0x705a60*/
        {
          v18 = *(_DWORD *)(*((_DWORD *)v3[0xB] + 1) + 4 * v15); /*0x705a68*/
          sub_704190((_WORD *)v17, v18); /*0x705a70*/
          *(_DWORD *)v17 = &NiTexturingProperty::ShaderMap::`vftable'; /*0x705a75*/
          *(_DWORD *)(v17 + 0x10) = *(_DWORD *)(v18 + 0x10); /*0x705a7e*/
          v19 = v17; /*0x705a81*/
        }
        else
        {
          v19 = 0; /*0x705a85*/
        }
        v20 = *(_DWORD *)(a2 + 0x2C); /*0x705a8b*/
        v21 = *(unsigned __int16 *)(v20 + 8); /*0x705a8e*/
        v24 = 0xFFFFFFFF; /*0x705a94*/
        if ( v15 >= v21 ) /*0x705a9c*/
          NiTArray_SetSize((unsigned __int16 *)v20, v15 + *(unsigned __int16 *)(v20 + 0xE)); /*0x705aa7*/
        if ( v15 < *(unsigned __int16 *)(v20 + 0xA) ) /*0x705ab2*/
        {
          if ( v19 ) /*0x705ac8*/
          {
            if ( !*(_DWORD *)(v16 + *(_DWORD *)(v20 + 4)) ) /*0x705acd*/
              ++*(_WORD *)(v20 + 0xC); /*0x705ad3*/
          }
          else if ( *(_DWORD *)(v16 + *(_DWORD *)(v20 + 4)) ) /*0x705add*/
          {
            --*(_WORD *)(v20 + 0xC); /*0x705ae3*/
          }
        }
        else
        {
          *(_WORD *)(v20 + 0xA) = v15 + 1; /*0x705ab9*/
          if ( v19 ) /*0x705abd*/
            ++*(_WORD *)(v20 + 0xC); /*0x705abf*/
        }
        *(_DWORD *)(v16 + *(_DWORD *)(v20 + 4)) = v19; /*0x705aec*/
        v3 = this; /*0x705aef*/
        result = i; /*0x705af3*/
      }
    }
  }
  return result; /*0x705b02*/
}
