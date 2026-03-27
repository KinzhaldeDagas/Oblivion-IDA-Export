0x5B0620: push    ecx
0x5B0621: push    esi
0x5B0622: mov     esi, ecx
0x5B0624: mov     eax, [esi+178h]
0x5B062A: test    eax, eax
0x5B062C: jz      loc_5B07D0
0x5B0632: cmp     dword ptr [eax+44h], 0
0x5B0636: jz      short loc_5B0651
0x5B0638: mov     eax, ds:0B35ECCh
0x5B063D: mov     ecx, ds:0B333C4h
0x5B0643: push    eax
0x5B0644: call    TESObjectREF_GetItemCount
0x5B0649: test    eax, eax
0x5B064B: jz      loc_5B07D0
0x5B0651: fld     dword ptr [esi+148h]
0x5B0657: call    Double_To_SInt32
0x5B065C: push    eax
0x5B065D: mov     ecx, esi
0x5B065F: call    sub_5AF190
0x5B0664: fldz
0x5B0666: lea     ecx, [eax+eax*4]
0x5B0669: fcomp   dword ptr [esi+ecx*8+7Ch]
0x5B066D: fnstsw  ax
0x5B066F: test    ah, 44h
0x5B0672: jnp     short loc_5B0681
0x5B0674: cmp     byte ptr ds:0B3B3F5h, 0
0x5B067B: jz      loc_5B07D0
0x5B0681: mov     edx, ds:0B35ECCh
0x5B0687: mov     ecx, ds:0B333C4h
0x5B068D: push    edx
0x5B068E: call    TESObjectREF_GetItemCount
0x5B0693: test    eax, eax
0x5B0695: mov     ecx, esi
0x5B0697: jnz     short loc_5B0704
0x5B0699: push    offset aUilockpickbrea; "UILockPickBreak"
0x5B069E: call    sub_5AFD50
0x5B06A3: push    offset aUilocktumblerf; "UILockTumblerFall"
0x5B06A8: mov     ecx, esi
0x5B06AA: call    sub_5AFD50
0x5B06AF: mov     ecx, ds:0B333C4h
0x5B06B5: mov     eax, [ecx]
0x5B06B7: mov     edx, ds:0B35EC8h
0x5B06BD: mov     eax, [eax+100h]
0x5B06C3: push    1
0x5B06C5: push    1
0x5B06C7: push    0
0x5B06C9: push    0
0x5B06CB: push    0
0x5B06CD: push    0
0x5B06CF: push    0
0x5B06D1: push    1
0x5B06D3: push    0
0x5B06D5: push    edx; a3
0x5B06D6: call    eax
0x5B06D8: add     dword ptr [esi+3Ch], 0FFFFFFFFh
0x5B06DC: mov     ecx, [esi+3Ch]
0x5B06DF: mov     [esp+8+var_4], ecx
0x5B06E3: fild    [esp+8+var_4]
0x5B06E7: push    ecx
0x5B06E8: mov     ecx, [esi+28h]; this
0x5B06EB: fstp    [esp+0Ch+a3]; a3
0x5B06EE: push    0FB1h; a2
0x5B06F3: call    Tile_SetFloat
0x5B06F8: mov     dword ptr [esi+174h], 0
0x5B0702: jmp     short loc_5B070E
0x5B0704: push    offset aUilocktumblerf; "UILockTumblerFall"
0x5B0709: call    sub_5AFD50
0x5B070E: cmp     dword ptr [esi+3Ch], 1
0x5B0712: jge     short loc_5B0759
0x5B0714: push    offset aDrslockopenfai; "DRSLockOpenFail"
0x5B0719: mov     ecx, esi
0x5B071B: call    sub_5AFD50
0x5B0720: push    0FFh
0x5B0725: call    sub_583DF0
0x5B072A: call    sub_5AF960
0x5B072F: mov     edx, ds:0B38CF0h
0x5B0735: mov     eax, ds:0B38C48h
0x5B073A: push    0
0x5B073C: push    edx
0x5B073D: push    1
0x5B073F: push    0
0x5B0741: push    eax
0x5B0742: call    ShowUIMessageBox
0x5B0747: mov     eax, ds:0B333C4h
0x5B074C: add     esp, 18h
0x5B074F: add     dword ptr [eax+67Ch], 1
0x5B0756: pop     esi
0x5B0757: pop     ecx
0x5B0758: retn
0x5B0759: cmp     byte ptr ds:0B3B3F5h, 0
0x5B0760: jnz     short loc_5B07BF
0x5B0762: mov     ecx, ds:0B35ECCh
0x5B0768: push    ecx
0x5B0769: mov     ecx, ds:0B333C4h
0x5B076F: call    TESObjectREF_GetItemCount
0x5B0774: test    eax, eax
0x5B0776: jnz     short loc_5B07BF
0x5B0778: fld     dword ptr ds:0A379B4h
0x5B077E: push    ecx
0x5B077F: mov     ecx, [esi+178h]; this
0x5B0785: fstp    [esp+0Ch+a3]; a3
0x5B0788: push    0FAEh; a2
0x5B078D: call    Tile_SetFloat
0x5B0792: mov     ecx, [esi+178h]
0x5B0798: push    0; float
0x5B079A: call    sub_58FBA0
0x5B079F: mov     dword ptr [esi+150h], 3
0x5B07A9: mov     eax, ds:0B333C4h
0x5B07AE: add     dword ptr [eax+67Ch], 1
0x5B07B5: mov     byte ptr ds:0B3B3F5h, 0
0x5B07BC: pop     esi
0x5B07BD: pop     ecx
0x5B07BE: retn
0x5B07BF: mov     dword ptr [esi+150h], 0
0x5B07C9: mov     byte ptr ds:0B3B3F5h, 0
0x5B07D0: pop     esi
0x5B07D1: pop     ecx
0x5B07D2: retn
