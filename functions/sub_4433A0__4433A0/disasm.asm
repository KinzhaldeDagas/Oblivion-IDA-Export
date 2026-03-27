0x4433A0: push    ecx
0x4433A1: push    ebx
0x4433A2: mov     ebx, [esp+8+arg_0]
0x4433A6: test    ebx, ebx
0x4433A8: jz      loc_443548
0x4433AE: push    ebp
0x4433AF: push    esi
0x4433B0: push    edi
0x4433B1: mov     ecx, ebx; this
0x4433B3: call    TESObjectCELL_IsInterior
0x4433B8: test    al, al
0x4433BA: mov     eax, [ebx+1Ch]
0x4433BD: jz      short loc_4433DC
0x4433BF: test    eax, eax
0x4433C1: jnz     short loc_4433C8
0x4433C3: mov     eax, offset EmptyString
0x4433C8: push    eax
0x4433C9: mov     eax, [ebx+0Ch]
0x4433CC: push    eax; ArgList
0x4433CD: push    offset aMovingToInteri; "Moving to interior cell %08X %s"
0x4433D2: call    sub_40FEC0
0x4433D7: add     esp, 0Ch
0x4433DA: jmp     short loc_443407
0x4433DC: test    eax, eax
0x4433DE: jnz     short loc_4433E5
0x4433E0: mov     eax, offset EmptyString
0x4433E5: mov     esi, [ebx+0Ch]
0x4433E8: push    eax
0x4433E9: mov     ecx, ebx; this
0x4433EB: call    TESObjectCELL_GetYCoordinate
0x4433F0: push    eax
0x4433F1: mov     ecx, ebx; this
0x4433F3: call    TESObjectCELL_GetXCoordinate
0x4433F8: push    eax
0x4433F9: push    esi; ArgList
0x4433FA: push    offset aMovingToExteri; "Moving to exterior cell %08X (%i,%i) %s"
0x4433FF: call    sub_40FEC0
0x443404: add     esp, 14h
0x443407: mov     esi, ds:0A280D0h
0x44340D: call    esi ; GetTickCount
0x44340F: mov     ecx, ds:0B333C4h; int
0x443415: push    ebx; int
0x443416: push    0; ArgList
0x443418: mov     [esp+1Ch+var_4], eax
0x44341C: call    sub_66FD90
0x443421: mov     ecx, ds:0B33A10h
0x443427: push    5
0x443429: call    sub_434020
0x44342E: call    esi ; GetTickCount
0x443430: mov     ebp, eax
0x443432: call    esi ; GetTickCount
0x443434: mov     ecx, eax
0x443436: sub     ecx, [esp+14h+arg_8]
0x44343A: mov     eax, 95217CB1h
0x44343F: mul     ecx
0x443441: mov     esi, edx
0x443443: shr     esi, 15h
0x443446: mov     edx, esi
0x443448: imul    edx, 0FFC91180h
0x44344E: add     ecx, edx
0x443450: mov     eax, 45E7B273h
0x443455: mul     ecx
0x443457: mov     edi, edx
0x443459: shr     edi, 0Eh
0x44345C: mov     eax, edi
0x44345E: imul    eax, 0EA60h
0x443464: sub     ecx, eax
0x443466: mov     eax, 10624DD3h
0x44346B: mul     ecx
0x44346D: shr     edx, 6
0x443470: mov     ecx, ebx; this
0x443472: mov     [esp+14h+arg_0], edx
0x443476: call    TESObjectCELL_IsInterior
0x44347B: sub     ebp, [esp+14h+var_4]
0x44347F: test    al, al
0x443481: jz      short loc_4434B7
0x443483: test    ebp, ebp
0x443485: mov     ecx, [esp+14h+arg_0]
0x443489: push    ecx
0x44348A: push    edi
0x44348B: mov     [esp+1Ch+arg_0], ebp
0x44348F: fild    [esp+1Ch+arg_0]
0x443493: push    esi
0x443494: jge     short loc_44349C
0x443496: fadd    dword ptr ds:0A2FC78h
0x44349C: fdiv    qword ptr ds:0A2FC70h
0x4434A2: sub     esp, 8
0x4434A5: fstp    qword ptr [esp+28h+ArgList]; ArgList
0x4434A8: push    offset aInteriorCellFi; "Interior cell finished loading in %.02f"...
0x4434AD: call    sub_40FEC0
0x4434B2: add     esp, 18h
0x4434B5: jmp     short loc_4434F9
0x4434B7: test    ebp, ebp
0x4434B9: mov     edx, [esp+14h+arg_0]
0x4434BD: push    edx
0x4434BE: push    edi
0x4434BF: mov     [esp+1Ch+arg_0], ebp
0x4434C3: fild    [esp+1Ch+arg_0]
0x4434C7: push    esi
0x4434C8: jge     short loc_4434D0
0x4434CA: fadd    dword ptr ds:0A2FC78h
0x4434D0: fdiv    qword ptr ds:0A2FC70h
0x4434D6: sub     esp, 8
0x4434D9: mov     ecx, ebx; this
0x4434DB: fstp    qword ptr [esp+28h+ArgList]
0x4434DE: call    TESObjectCELL_GetYCoordinate
0x4434E3: push    eax
0x4434E4: mov     ecx, ebx; this
0x4434E6: call    TESObjectCELL_GetXCoordinate
0x4434EB: push    eax; ArgList
0x4434EC: push    offset aExteriorCellII; "Exterior cell (%i,%i) finished loading "...
0x4434F1: call    sub_40FEC0
0x4434F6: add     esp, 20h
0x4434F9: fld     dword ptr ds:0A374BCh
0x4434FF: push    ecx
0x443500: mov     ecx, offset TimeGlobals
0x443505: fstp    [esp+18h+var_18]; float
0x443508: call    sub_4029E0
0x44350D: mov     ecx, offset ActorProcessManager_ptr
0x443512: call    sub_674A20
0x443517: mov     ecx, offset ActorProcessManager_ptr
0x44351C: call    sub_678510
0x443521: mov     ecx, offset ActorProcessManager_ptr
0x443526: call    sub_674A20
0x44352B: mov     eax, [esp+14h+arg_4]
0x44352F: cmp     eax, 4
0x443532: pop     edi
0x443533: pop     esi
0x443534: pop     ebp
0x443535: jb      short loc_443548
0x443537: cmp     eax, 5
0x44353A: ja      short loc_443548
0x44353C: mov     ecx, ds:0B33B00h
0x443542: push    eax
0x443543: call    sub_466BE0
0x443548: pop     ebx
0x443549: pop     ecx
0x44354A: retn    0Ch
