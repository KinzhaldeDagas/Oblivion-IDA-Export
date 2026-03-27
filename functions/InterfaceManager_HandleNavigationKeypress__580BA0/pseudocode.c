void __userpurge InterfaceManager::HandleNavigationKeypress(
        float *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        char a4@<bpl>,
        int a3)
{
  InputGlobal *input; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  _DWORD *v9; // esi
  double Float; // st7
  int v11; // ebp
  int v12; // ebx
  _DWORD *v13; // esi
  _DWORD *ParentMenu; // edi
  unsigned __int8 (__thiscall **v15)(_DWORD *, int, _DWORD); // esi
  _DWORD *v16; // esi
  Tile *v17; // edi
  _DWORD *v18; // ebx
  double v19; // st7
  int v20; // eax
  void (__thiscall **v21)(_DWORD *, int, _DWORD *); // ebx
  double v22; // st7
  int v23; // eax
  double v24; // st7
  int v25; // eax
  _DWORD *v26; // ebx
  void (__thiscall **v27)(_DWORD *, int, _DWORD *); // edi
  double v28; // st7
  int v29; // eax
  _DWORD *v30; // esi
  _DWORD *v31; // esi
  double v32; // st7
  Tile *v33; // eax
  Tile *v34; // esi
  double v35; // st7
  int v36; // eax
  void (__thiscall **v37)(_DWORD *, int, Tile *); // edi
  double v38; // st7
  int v39; // eax
  _DWORD *v40; // edi
  BSSimpleList_VoidPtr *next; // eax
  int v42; // ebp
  int v43; // ebx
  _DWORD *v44; // esi
  int v45; // eax
  _DWORD *sound; // ecx
  int *v47; // eax
  int *v48; // esi
  float v49; // [esp+10h] [ebp-2Ch]
  int v50; // [esp+24h] [ebp-18h] BYREF
  float *v51; // [esp+28h] [ebp-14h]
  _DWORD *v52; // [esp+2Ch] [ebp-10h] BYREF
  _DWORD *v53; // [esp+30h] [ebp-Ch] BYREF
  BSSimpleList_VoidPtr v54; // [esp+34h] [ebp-8h] BYREF
  int a3a; // [esp+40h] [ebp+4h]
  float a3c; // [esp+40h] [ebp+4h]
  _DWORD *a3d; // [esp+40h] [ebp+4h]
  float a3e; // [esp+40h] [ebp+4h]
  int a3b; // [esp+40h] [ebp+4h]
  float a3f; // [esp+40h] [ebp+4h]

  input = OSGlobals->input;
  v51 = this;
  v50 = (int)input;
  Menu_GetB3A708(1);
  v7 = (_DWORD *)sub_5877D0(a4, st5_0, st6_0);
  v8 = v7;
  if ( v7 )
    v9 = (_DWORD *)v7[1];
  else
    v9 = 0;
  v52 = v9;
  if ( v7 )
  {
    Float = 1.0;
    v11 = a3;
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v7 + 0x38))(v7, a3, 1.0) && v9 && a3 )
    {
      if ( a3 == 1 || a3 == 2 || a3 == 4 || a3 == 3 )
      {
        *((_BYTE *)this + 0xB9) = 0;
        v50 = 0xFDD;
        switch ( a3 )
        {
          case 1:
            a3b = 0xFF1;
            break;
          case 2:
            a3b = 0xFF2;
            break;
          case 4:
            a3b = 0xFF3;
            break;
          default:
            a3b = 0xFF4;
            break;
        }
        v53 = *((_DWORD **)this + 0x22);
        v30 = v53;
        if ( v53 )
        {
          v40 = sub_58E3B0(v53, st5_0, st6_0, 1.0, (_DWORD *)a3b, &v50);
          v54.firstNode.data = 0;
          v54.firstNode.next = 0;
          BSSimpleList_PushFront(&v54, (int)v30);
          if ( v40 )
          {
            while ( 2 )
            {
              next = &v54;
              do
              {
                if ( next->firstNode.data == v40 )
                  goto LABEL_106;
                next = (BSSimpleList_VoidPtr *)next->firstNode.next;
              }
              while ( next );
              if ( Tile_GetFloat(v40, 0xFA1) != fConstant_1 && Tile_GetFloat(v40, 0xFC9) == fConstant_2 )
              {
                Float = Tile_GetFloat(v40, 0xFF0);
                if ( Float != flt_A690E0 )
                {
LABEL_106:
                  if ( sub_446C30(&v54, v40) )
                  {
                    Float = Tile_GetFloat(v40, 0xFA1);
                    if ( Float == fConstant_1
                      || (Float = Tile_GetFloat(v40, 0xFC9), Float != fConstant_2)
                      || (Float = Tile_GetFloat(v40, 0xFF0), Float == flt_A690E0) )
                    {
                      v40 = 0;
                    }
                  }
                  break;
                }
              }
              BSSimpleList_PushFront(&v54, (int)v40);
              Float = Tile_GetFloat(v40, 0xFF6);
              if ( Float != dbl_A690D8 )
                goto LABEL_103;
              v42 = v40[0xE];
              v43 = 0;
              v52 = 0;
              if ( !v42 )
                goto LABEL_103;
              do
              {
                v44 = *(_DWORD **)(v42 + 8);
                v42 = *(_DWORD *)(v42 + 4);
                if ( sub_5893B0(v44) )
                {
                  if ( sub_588B50(v44, 0xFF0) )
                  {
                    Float = Tile_GetFloat(v44, 0xFF0);
                    v45 = Double_To_SInt32(Float);
                    if ( v45 > v43 )
                    {
                      v43 = v45;
                      v52 = v44;
                    }
                  }
                }
              }
              while ( v42 );
              if ( v52 )
                v40 = v52;
              else
LABEL_103:
                v40 = sub_58E3B0(v40, st5_0, st6_0, Float, (_DWORD *)a3b, &v50);
              if ( v40 )
                continue;
              break;
            }
          }
          BSSimpleList_Clear(&v54);
          if ( v40 )
          {
            if ( v40 != v53 && v50 == 0xFDD )
            {
              sound = OSGlobals->sound;
              if ( sound )
              {
                v47 = PlaySound___(sound, "UIMenuFocus", 0x121, 1);
                v48 = v47;
                if ( v47 )
                {
                  sub_6B7190(v47, 0);
                  sub_6B73E0(v48);
                  FormHeapFree((unsigned int)v48);
                }
              }
            }
            sub_57F9F0(v51, st5_0, Float, st6_0, *(float *)&v40, (_DWORD *)v50, a3b);
          }
          else
          {
            sub_57F9F0(v51, st5_0, Float, st6_0, *(float *)&v53, (_DWORD *)v50, a3b);
          }
        }
        else
        {
          v53 = (_DWORD *)0x80000000;
          v31 = sub_57DA90(this, st5_0, st6_0, 1.0, (int *)&v53, 0);
          v32 = sub_57F9F0(this, st5_0, 1.0, st6_0, *(float *)&v31, (_DWORD *)0xFDD, 0);
          if ( !v31 )
          {
            v33 = (Tile *)sub_58E3B0(v52, st5_0, st6_0, v32, (_DWORD *)a3b, &v50);
            v34 = v33;
            if ( v33 )
            {
              v35 = Tile_GetFloat(v33, 0xFE5);
              v36 = Double_To_SInt32(v35);
              if ( v36 )
                sub_57DE50(v36);
              a3f = Tile_GetFloat(v34, 0xFE2) + dbl_A2F928;
              Tile_SetFloat(v34, (_DWORD *)0xFE3, a3f);
              Tile_SetFloat(v34, (_DWORD *)0xFE1, 1.0);
              Tile_SetFloat(v34, (_DWORD *)0xFE1, 0.0);
              v37 = (void (__thiscall **)(_DWORD *, int, Tile *))(*v8 + 0xC);
              v38 = Tile_GetFloat(v34, 0xFA8);
              v39 = Double_To_SInt32(v38);
              (*v37)(v8, v39, v34);
            }
          }
        }
      }
      else
      {
        v12 = *(_DWORD *)(*((_DWORD *)this + 0x1A) + 0x38);
        while ( v12 )
        {
          v13 = *(_DWORD **)(v12 + 8);
          v12 = *(_DWORD *)(v12 + 4);
          if ( v13 )
          {
            ParentMenu = (_DWORD *)Tile_GetParentMenu(v13);
            if ( ParentMenu )
            {
              if ( sub_5893B0(v13) )
              {
                v15 = (unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*ParentMenu + 0x38);
                Float = (double)sub_6DA150(a3);
                v49 = Float;
                if ( (*v15)(ParentMenu, a3, LODWORD(v49)) )
                {
                  nullsub_returnvVoid_1arg(a3);
                  return;
                }
              }
            }
            this = v51;
          }
        }
        if ( a3 == 5 )
        {
          Menu_GetB3A708(1);
          if ( !sub_5878B0(5, st5_0, st6_0, Float, 0x3F5) )
          {
            Menu_GetB3A708(1);
            if ( !sub_5878B0(5, st5_0, st6_0, Float, 0x414) )
            {
              Menu_GetB3A708(1);
              if ( !sub_5878B0(5, st5_0, st6_0, Float, 0x3EF) )
              {
                if ( byte_B143AE )
                  sub_57B560(5, st5_0, st6_0);
              }
            }
          }
        }
        a3a = 0;
        switch ( v11 )
        {
          case 9:
            a3a = 0xFF7;
            break;
          case 0xA:
            a3a = 0xFF8;
            break;
          case 0xB:
            a3a = 0xFF9;
            break;
          case 0xC:
            a3a = 0xFFA;
            break;
          case 0xE:
            a3a = 0xFFC;
            break;
          case 0xD:
            a3a = 0xFFB;
            break;
          case 0x10:
            a3a = 0xFFE;
            break;
          case 0xF:
            a3a = 0xFFD;
            break;
          case 5:
            a3a = 0x1001;
            break;
        }
        v16 = *((_DWORD **)this + 0x22);
        if ( !v16 )
        {
          v16 = *((_DWORD **)this + 0x26);
          if ( !v16 )
            v16 = v52;
        }
        while ( !sub_5893B0(v16) )
        {
          v16 = (_DWORD *)v16[4];
          if ( !v16 )
            return;
        }
        if ( v16 )
        {
          v17 = (Tile *)sub_58E3B0(v16, st5_0, st6_0, Float, (_DWORD *)a3a, &v52);
          v18 = v16;
          while ( !v17 )
          {
            if ( !v18 )
              break;
            v18 = (_DWORD *)v18[4];
            if ( v18 )
              v17 = (Tile *)sub_58E3B0(v18, st5_0, st6_0, Float, (_DWORD *)a3a, &v52);
          }
          if ( v11 == 0xFFFFFFFE )
          {
            v17 = (Tile *)v16;
            v11 = 9;
          }
          if ( v17 && sub_5893B0(v17) && Tile_GetFloat(v17, 0xFC9) == fConstant_2 )
          {
            if ( v52 == (_DWORD *)0xFE1 )
            {
LABEL_64:
              v19 = Tile_GetFloat(v17, 0xFE5);
              v20 = Double_To_SInt32(v19);
              if ( v20 )
                sub_57DE50(v20);
              a3c = Tile_GetFloat(v17, 0xFE2) + dbl_A2F928;
              Tile_SetFloat(v17, (_DWORD *)0xFE3, a3c);
              Tile_SetFloat(v17, (_DWORD *)0xFE1, 1.0);
              Tile_SetFloat(v17, (_DWORD *)0xFE1, 0.0);
              a3d = (_DWORD *)Tile_GetParentMenu(v17);
              v21 = (void (__thiscall **)(_DWORD *, int, _DWORD *))(*a3d + 0xC);
              v22 = Tile_GetFloat(v17, 0xFA8);
              v23 = Double_To_SInt32(v22);
              (*v21)(a3d, v23, v16);
              if ( v52 == (_DWORD *)0xFDF )
                *((_DWORD *)v51 + 0x46) &= 0xFFFBu;
              nullsub_returnvVoid_1arg(v11);
              nullsub_returnvVoid_1arg(6);
              return;
            }
            if ( v52 == (_DWORD *)0xFDF )
            {
              *((_DWORD *)v51 + 0x46) |= 4u;
              goto LABEL_64;
            }
          }
          if ( v11 == 9 && Tile_GetFloat(v16, 0xFC9) == fConstant_2 )
          {
            v24 = Tile_GetFloat(v16, 0xFE5);
            v25 = Double_To_SInt32(v24);
            if ( v25 )
              sub_57DE50(v25);
            a3e = Tile_GetFloat(v16, 0xFE2) + dbl_A2F928;
            Tile_SetFloat((Tile *)v16, (_DWORD *)0xFE3, a3e);
            Tile_SetFloat((Tile *)v16, (_DWORD *)0xFE1, 1.0);
            Tile_SetFloat((Tile *)v16, (_DWORD *)0xFE1, 0.0);
            v26 = (_DWORD *)Tile_GetParentMenu(v16);
            v27 = (void (__thiscall **)(_DWORD *, int, _DWORD *))(*v26 + 0xC);
            v28 = Tile_GetFloat(v16, 0xFA8);
            v29 = Double_To_SInt32(v28);
            (*v27)(v26, v29, v16);
            nullsub_returnvVoid_1arg(9);
          }
        }
      }
    }
  }
}
