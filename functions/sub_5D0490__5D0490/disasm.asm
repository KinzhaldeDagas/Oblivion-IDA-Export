0x5D0490: sub     esp, 0Ch
0x5D0493: push    ebx
0x5D0494: mov     ebx, ecx
0x5D0496: push    esi; a3
0x5D0497: mov     esi, [ebx+38h]
0x5D049A: test    esi, esi
0x5D049C: push    edi; a3
0x5D049D: mov     edi, [ebx+40h]
0x5D04A0: jz      loc_5D0556
0x5D04A6: push    0FB5h
0x5D04AB: mov     ecx, esi
0x5D04AD: call    Tile_GetFloat
0x5D04B2: call    Double_To_SInt32
0x5D04B7: push    1; arg1
0x5D04B9: push    0; canCreate
0x5D04BB: mov     dword ptr [esp+20h+var_8], eax
0x5D04BF: call    InterfaceManager_GetSingleton
0x5D04C4: fld     dword ptr [eax+38h]
0x5D04C7: call    Double_To_SInt32
0x5D04CC: mov     ecx, eax
0x5D04CE: mov     eax, 77777777h
0x5D04D3: imul    ecx
0x5D04D5: sub     edx, ecx
0x5D04D7: sar     edx, 6
0x5D04DA: mov     eax, edx
0x5D04DC: shr     eax, 1Fh
0x5D04DF: add     eax, edx
0x5D04E1: mov     [esp+20h+var_C], eax
0x5D04E5: add     esp, 4
0x5D04E8: mov     ecx, edi; this
0x5D04EA: fild    [esp+1Ch+var_C]
0x5D04EE: fstp    [esp+1Ch+a2]; a3
0x5D04F1: push    0FB7h; a2
0x5D04F6: call    Tile_SetFloat
0x5D04FB: fldz
0x5D04FD: push    ecx
0x5D04FE: fstp    [esp+1Ch+a2]; a3
0x5D0501: push    0FB7h; a2
0x5D0506: mov     ecx, edi; this
0x5D0508: call    Tile_SetFloat
0x5D050D: fild    dword ptr [esp+18h+var_8]
0x5D0511: push    0FB5h
0x5D0516: mov     ecx, esi
0x5D0518: fstp    [esp+1Ch+var_8]
0x5D051C: call    Tile_GetFloat
0x5D0521: fld     [esp+18h+var_8]
0x5D0525: fucompp
0x5D0527: fnstsw  ax
0x5D0529: test    ah, 44h
0x5D052C: jnp     short loc_5D0556
0x5D052E: mov     eax, [esp+18h+arg_4]
0x5D0532: mov     ecx, [esp+1Ch]
0x5D0536: mov     edx, [ebx]
0x5D0538: mov     edx, [edx+14h]
0x5D053B: push    eax
0x5D053C: push    ecx
0x5D053D: mov     ecx, ebx
0x5D053F: call    edx
0x5D0541: push    0
0x5D0543: push    1; arg1
0x5D0545: push    0; canCreate
0x5D0547: call    InterfaceManager_GetSingleton
0x5D054C: add     esp, 8
0x5D054F: mov     ecx, eax
0x5D0551: call    sub_57D730
0x5D0556: pop     edi
0x5D0557: pop     esi
0x5D0558: pop     ebx
0x5D0559: add     esp, 0Ch
0x5D055C: retn    8
