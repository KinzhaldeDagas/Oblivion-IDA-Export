void __userpurge InterfaceManager::HandleNavigationKeypress(
        float *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        int a3)
{
  InputGlobal *input; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // ebx
  Tile *v8; // esi
  double Float; // st7
  int v10; // ebp
  int v11; // ebx
  _DWORD *v12; // esi
  _DWORD *ParentMenu; // edi
  unsigned __int8 (__thiscall **v14)(_DWORD *, int, _DWORD); // esi
  Tile *v15; // esi
  Tile *v16; // edi
  Tile *v17; // ebx
  double v18; // st7
  int v19; // eax
  void (__thiscall **v20)(_DWORD *, int, Tile *); // ebx
  double v21; // st7
  int v22; // eax
  double v23; // st7
  int v24; // eax
  _DWORD *v25; // ebx
  void (__thiscall **v26)(_DWORD *, int, Tile *); // edi
  double v27; // st7
  int v28; // eax
  int v29; // esi
  Tile *v30; // esi
  double v31; // st7
  Tile *v32; // eax
  Tile *v33; // esi
  double v34; // st7
  int v35; // eax
  void (__thiscall **v36)(_DWORD *, int, Tile *); // edi
  double v37; // st7
  int v38; // eax
  Tile *v39; // edi
  BSSimpleList_VoidPtr *next; // eax
  int v41; // ebp
  int v42; // ebx
  Tile *v43; // esi
  int v44; // eax
  int *sound; // ecx
  int *v46; // eax
  int *v47; // esi
  float v48; // [esp+10h] [ebp-2Ch]
  int v49; // [esp+24h] [ebp-18h] BYREF
  float *v50; // [esp+28h] [ebp-14h]
  Tile *v51; // [esp+2Ch] [ebp-10h] BYREF
  int maxFocus; // [esp+30h] [ebp-Ch] BYREF
  BSSimpleList_VoidPtr v53; // [esp+34h] [ebp-8h] BYREF
  int a3a; // [esp+40h] [ebp+4h]
  float a3c; // [esp+40h] [ebp+4h]
  _DWORD *a3d; // [esp+40h] [ebp+4h]
  float a3e; // [esp+40h] [ebp+4h]
  int a3b; // [esp+40h] [ebp+4h]
  float a3f; // [esp+40h] [ebp+4h]

  input = MEMORY[0xB33398]->input; /*0x580bad*/
  v50 = this; /*0x580bb2*/
  v49 = (int)input; /*0x580bb6*/
  Menu_GetB3A708(1); /*0x580bba*/
  v6 = (_DWORD *)sub_5877D0(); /*0x580bc4*/
  v7 = v6; /*0x580bc9*/
  if ( v6 ) /*0x580bcd*/
    v8 = (Tile *)v6[1]; /*0x580bcf*/
  else
    v8 = 0; /*0x580bd4*/
  v51 = v8; /*0x580bd8*/
  if ( v6 ) /*0x580bdc*/
  {
    Float = 1.0; /*0x580be2*/
    v10 = a3; /*0x580bea*/
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 0x38))(v6, a3, 1.0) && v8 && a3 ) /*0x580c09*/
    {
      if ( a3 == 1 || a3 == 2 || a3 == 4 || a3 == 3 ) /*0x580c2d*/
      {
        *((_BYTE *)this + 0xB9) = 0; /*0x581012*/
        v49 = 0xFDD; /*0x581019*/
        switch ( a3 ) /*0x581029*/
        {
          case 1: /*0x581029*/
            a3b = 0xFF1; /*0x58102b*/
            break;
          case 2: /*0x581029*/
            a3b = 0xFF2; /*0x58103a*/
            break;
          case 4: /*0x581029*/
            a3b = 0xFF3; /*0x581049*/
            break;
          default:
            a3b = 0xFF4; /*0x581058*/
            break;
        }
        maxFocus = *((_DWORD *)this + 0x22); /*0x581068*/
        v29 = maxFocus; /*0x581060*/
        if ( maxFocus ) /*0x58106c*/
        {
          v39 = (Tile *)Tile::ResolveNavigationTrait((Tile *)maxFocus, st5_0, st6_0, 1.0, (_DWORD *)a3b, &v49); /*0x581169*/
          v53.firstNode.data = 0; /*0x58116b*/
          v53.firstNode.next = 0; /*0x58116f*/
          BSSimpleList_PushFront(&v53, v29); /*0x581173*/
          if ( v39 ) /*0x58117a*/
          {
            while ( 2 ) /*0x581180*/
            {
              next = &v53; /*0x581180*/
              do /*0x581191*/
              {
                if ( next->firstNode.data == v39 ) /*0x581186*/
                  goto LABEL_106; /*0x581186*/
                next = (BSSimpleList_VoidPtr *)next->firstNode.next; /*0x58118c*/
              }
              while ( next ); /*0x581191*/
              if ( Tile_GetFloat(v39, 0xFA1) != fConstant_1 && Tile_GetFloat(v39, 0xFC9) == fConstant_2 ) /*0x5811c3*/
              {
                Float = Tile_GetFloat(v39, 0xFF0); /*0x5811cc*/
                if ( Float != flt_A690E0 ) /*0x5811dc*/
                {
LABEL_106:
                  if ( BSSimpleList::Contains(&v53, v39) ) /*0x581293*/
                  {
                    Float = Tile_GetFloat(v39, 0xFA1); /*0x5812a3*/
                    if ( Float == fConstant_1 /*0x5812e5*/
                      || (Float = Tile_GetFloat(v39, 0xFC9), Float != fConstant_2)
                      || (Float = Tile_GetFloat(v39, 0xFF0), Float == flt_A690E0) )
                    {
                      v39 = 0; /*0x5812e7*/
                    }
                  }
                  break; /*0x5812e7*/
                }
              }
              BSSimpleList_PushFront(&v53, (int)v39); /*0x5811e7*/
              Float = Tile_GetFloat(v39, 0xFF6); /*0x5811f3*/
              if ( Float != dbl_A690D8 ) /*0x581203*/
                goto LABEL_103; /*0x581203*/
              v41 = *((_DWORD *)v39 + 0xE); /*0x581205*/
              v42 = 0; /*0x581208*/
              v51 = 0; /*0x58120c*/
              if ( !v41 ) /*0x581210*/
                goto LABEL_103; /*0x581210*/
              do /*0x581253*/
              {
                v43 = *(Tile **)(v41 + 8); /*0x581212*/
                v41 = *(_DWORD *)(v41 + 4); /*0x581218*/
                if ( Tile::IsVisible(v43) ) /*0x58121d*/
                {
                  if ( sub_588B50(v43, 0xFF0) ) /*0x58122d*/
                  {
                    Float = Tile_GetFloat(v43, 0xFF0); /*0x58123d*/
                    v44 = Double_To_SInt32(Float); /*0x581242*/
                    if ( v44 > v42 ) /*0x581249*/
                    {
                      v42 = v44; /*0x58124b*/
                      v51 = v43; /*0x58124d*/
                    }
                  }
                }
              }
              while ( v41 ); /*0x581253*/
              if ( v51 ) /*0x581259*/
                v39 = v51; /*0x58125b*/
              else
LABEL_103:
                v39 = (Tile *)Tile::ResolveNavigationTrait(v39, st5_0, st6_0, Float, (_DWORD *)a3b, &v49); /*0x58127e*/
              if ( v39 ) /*0x581282*/
                continue; /*0x581282*/
              break;
            }
          }
          BSSimpleList_Clear(&v53); /*0x5812e9*/
          if ( v39 ) /*0x5812f4*/
          {
            if ( v39 != (Tile *)maxFocus && v49 == 0xFDD ) /*0x581304*/
            {
              sound = (int *)MEMORY[0xB33398]->sound; /*0x58130b*/
              if ( sound ) /*0x581310*/
              {
                v46 = PlaySound___(sound, "UIMenuFocus", 0x121, 1); /*0x58131e*/
                v47 = v46; /*0x581323*/
                if ( v46 ) /*0x581327*/
                {
                  sub_6B7190(v46, 0); /*0x58132d*/
                  sub_6B73E0(v47); /*0x581334*/
                  FormHeapFree((unsigned int)v47); /*0x58133a*/
                }
              }
            }
            InterfaceManager::SetCurrentFocusTarget(v50, st5_0, Float, st6_0, *(float *)&v39, (_DWORD *)v49, a3b); /*0x581351*/
          }
          else
          {
            InterfaceManager::SetCurrentFocusTarget(v50, st5_0, Float, st6_0, *(float *)&maxFocus, (_DWORD *)v49, a3b); /*0x581373*/
          }
        }
        else
        {
          maxFocus = 0x80000000; /*0x58107a*/
          v30 = InterfaceManager::ScanForMaxFocus((InterfaceManager *)this, &maxFocus, 0); /*0x581089*/
          v31 = InterfaceManager::SetCurrentFocusTarget(this, st5_0, 1.0, st6_0, *(float *)&v30, (_DWORD *)0xFDD, 0); /*0x581093*/
          if ( !v30 ) /*0x58109a*/
          {
            v32 = (Tile *)Tile::ResolveNavigationTrait(v51, st5_0, st6_0, v31, (_DWORD *)a3b, &v49); /*0x5810ae*/
            v33 = v32; /*0x5810b3*/
            if ( v32 ) /*0x5810b7*/
            {
              v34 = Tile_GetFloat(v32, 0xFE5); /*0x5810c4*/
              v35 = Double_To_SInt32(v34); /*0x5810c9*/
              if ( v35 ) /*0x5810d0*/
                sub_57DE50(v35); /*0x5810d3*/
              a3f = Tile_GetFloat(v33, 0xFE2) + dbl_A2F928; /*0x5810f0*/
              Tile_SetFloat(v33, 0xFE3u, a3f); /*0x581100*/
              Tile_SetFloat(v33, 0xFE1u, 1.0); /*0x581112*/
              Tile_SetFloat(v33, 0xFE1u, 0.0); /*0x581124*/
              v36 = (void (__thiscall **)(_DWORD *, int, Tile *))(*v7 + 0xC); /*0x581133*/
              v37 = Tile_GetFloat(v33, 0xFA8); /*0x581136*/
              v38 = Double_To_SInt32(v37); /*0x58113b*/
              (*v36)(v7, v38, v33); /*0x581145*/
            }
          }
        }
      }
      else
      {
        v11 = *(_DWORD *)(*((_DWORD *)this + 0x1A) + 0x38); /*0x580c36*/
        while ( v11 ) /*0x580c3b*/
        {
          v12 = *(_DWORD **)(v11 + 8); /*0x580c40*/
          v11 = *(_DWORD *)(v11 + 4); /*0x580c48*/
          if ( v12 ) /*0x580c4b*/
          {
            ParentMenu = (_DWORD *)Tile_GetParentMenu(v12); /*0x580c54*/
            if ( ParentMenu ) /*0x580c58*/
            {
              if ( Tile::IsVisible(v12) ) /*0x580c5c*/
              {
                v14 = (unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*ParentMenu + 0x38); /*0x580c6c*/
                Float = (double)sub_6DA150(a3); /*0x580c7a*/
                v48 = Float; /*0x580c81*/
                if ( (*v14)(ParentMenu, a3, LODWORD(v48)) ) /*0x580c85*/
                {
                  nullsub_returnvVoid_1arg(a3); /*0x580d16*/
                  return; /*0x580d22*/
                }
              }
            }
            this = v50; /*0x580c8f*/
          }
        }
        if ( a3 == 5 ) /*0x580c9a*/
        {
          Menu_GetB3A708(1); /*0x580ca3*/
          if ( !sub_5878B0(0x3F5) ) /*0x580cad*/
          {
            Menu_GetB3A708(1); /*0x580cbd*/
            if ( !sub_5878B0(0x414) ) /*0x580cc7*/
            {
              Menu_GetB3A708(1); /*0x580cd7*/
              if ( !sub_5878B0(0x3EF) ) /*0x580ce1*/
              {
                if ( byte_B143AE ) /*0x580cea*/
                  sub_57B560(5, st5_0, st6_0); /*0x580cf2*/
              }
            }
          }
        }
        a3a = 0; /*0x580cfa*/
        switch ( v10 ) /*0x580d02*/
        {
          case 9: /*0x580d02*/
            a3a = 0xFF7; /*0x580d04*/
            break;
          case 0xA: /*0x580d02*/
            a3a = 0xFF8; /*0x580d2a*/
            break;
          case 0xB: /*0x580d02*/
            a3a = 0xFF9; /*0x580d39*/
            break;
          case 0xC: /*0x580d02*/
            a3a = 0xFFA; /*0x580d48*/
            break;
          case 0xE: /*0x580d02*/
            a3a = 0xFFC; /*0x580d57*/
            break;
          case 0xD: /*0x580d02*/
            a3a = 0xFFB; /*0x580d66*/
            break;
          case 0x10: /*0x580d02*/
            a3a = 0xFFE; /*0x580d75*/
            break;
          case 0xF: /*0x580d02*/
            a3a = 0xFFD; /*0x580d84*/
            break;
          case 5: /*0x580d02*/
            a3a = 0x1001; /*0x580d93*/
            break;
        }
        v15 = *((Tile **)this + 0x22); /*0x580d9b*/
        if ( !v15 ) /*0x580da3*/
        {
          v15 = *((Tile **)this + 0x26); /*0x580da5*/
          if ( !v15 ) /*0x580dad*/
            v15 = v51; /*0x580daf*/
        }
        while ( !Tile::IsVisible(v15) ) /*0x580dbc*/
        {
          v15 = *((Tile **)v15 + 4); /*0x580dbe*/
          if ( !v15 ) /*0x580dc3*/
            return; /*0x580dc3*/
        }
        if ( v15 ) /*0x580dd1*/
        {
          v16 = (Tile *)Tile::ResolveNavigationTrait(v15, st5_0, st6_0, Float, (_DWORD *)a3a, &v51); /*0x580de8*/
          v17 = v15; /*0x580dec*/
          while ( !v16 ) /*0x580dee*/
          {
            if ( !v17 ) /*0x580df2*/
              break; /*0x580df2*/
            v17 = *((Tile **)v17 + 4); /*0x580df4*/
            if ( v17 ) /*0x580df9*/
              v16 = (Tile *)Tile::ResolveNavigationTrait(v17, st5_0, st6_0, Float, (_DWORD *)a3a, &v51); /*0x580e0c*/
          }
          if ( v10 == 0xFFFFFFFE ) /*0x580e15*/
          {
            v16 = v15; /*0x580e17*/
            v10 = 9; /*0x580e19*/
          }
          if ( v16 && Tile::IsVisible(v16) && Tile_GetFloat(v16, 0xFC9) == fConstant_2 ) /*0x580e4c*/
          {
            if ( v51 == (Tile *)0xFE1 ) /*0x580e5b*/
            {
LABEL_64:
              v18 = Tile_GetFloat(v16, 0xFE5); /*0x580e73*/
              v19 = Double_To_SInt32(v18); /*0x580e7f*/
              if ( v19 ) /*0x580e86*/
                sub_57DE50(v19); /*0x580e89*/
              a3c = Tile_GetFloat(v16, 0xFE2) + dbl_A2F928; /*0x580ea6*/
              Tile_SetFloat(v16, 0xFE3u, a3c); /*0x580eb6*/
              Tile_SetFloat(v16, 0xFE1u, 1.0); /*0x580ec8*/
              Tile_SetFloat(v16, 0xFE1u, 0.0); /*0x580eda*/
              a3d = (_DWORD *)Tile_GetParentMenu(v16); /*0x580ef0*/
              v20 = (void (__thiscall **)(_DWORD *, int, Tile *))(*a3d + 0xC); /*0x580ef4*/
              v21 = Tile_GetFloat(v16, 0xFA8); /*0x580ef7*/
              v22 = Double_To_SInt32(v21); /*0x580efc*/
              (*v20)(a3d, v22, v15); /*0x580f08*/
              if ( v51 == (Tile *)0xFDF ) /*0x580f12*/
                *((_DWORD *)v50 + 0x46) &= 0xFFFBu; /*0x580f18*/
              nullsub_returnvVoid_1arg(v10); /*0x580f29*/
              nullsub_returnvVoid_1arg(6); /*0x580f32*/
              return; /*0x580f3e*/
            }
            if ( v51 == (Tile *)0xFDF ) /*0x580e62*/
            {
              *((_DWORD *)v50 + 0x46) |= 4u; /*0x580e6c*/
              goto LABEL_64; /*0x580e6c*/
            }
          }
          if ( v10 == 9 && Tile_GetFloat(v15, 0xFC9) == fConstant_2 ) /*0x580f61*/
          {
            v23 = Tile_GetFloat(v15, 0xFE5); /*0x580f6e*/
            v24 = Double_To_SInt32(v23); /*0x580f73*/
            if ( v24 ) /*0x580f7a*/
              sub_57DE50(v24); /*0x580f7d*/
            a3e = Tile_GetFloat(v15, 0xFE2) + dbl_A2F928; /*0x580f9a*/
            Tile_SetFloat(v15, 0xFE3u, a3e); /*0x580faa*/
            Tile_SetFloat(v15, 0xFE1u, 1.0); /*0x580fbc*/
            Tile_SetFloat(v15, 0xFE1u, 0.0); /*0x580fce*/
            v25 = (_DWORD *)Tile_GetParentMenu(v15); /*0x580fda*/
            v26 = (void (__thiscall **)(_DWORD *, int, Tile *))(*v25 + 0xC); /*0x580fe6*/
            v27 = Tile_GetFloat(v15, 0xFA8); /*0x580fe9*/
            v28 = Double_To_SInt32(v27); /*0x580fee*/
            (*v26)(v25, v28, v15); /*0x580ff8*/
            nullsub_returnvVoid_1arg(9); /*0x581000*/
          }
        }
      }
    }
  }
}
