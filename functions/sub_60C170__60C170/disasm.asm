0x60C170: sub     esp, 5Ch
0x60C173: push    ebx
0x60C174: push    ebp
0x60C175: mov     ebx, ecx
0x60C177: cmp     byte ptr [ebx+94h], 0
0x60C17E: push    esi
0x60C17F: push    edi
0x60C180: jz      short loc_60C1C5
0x60C182: mov     eax, [ebx+5Ch]
0x60C185: test    eax, eax
0x60C187: jz      short loc_60C1A1
0x60C189: mov     ecx, [eax]
0x60C18B: cmp     ecx, 1
0x60C18E: jz      short loc_60C194
0x60C190: test    ecx, ecx
0x60C192: jnz     short loc_60C1A1
0x60C194: mov     eax, [eax+28h]
0x60C197: test    eax, eax
0x60C199: jz      short loc_60C1A1
0x60C19B: cmp     dword ptr [eax+3Ch], 0
0x60C19F: jz      short loc_60C1C5
0x60C1A1: mov     ecx, [ebx+98h]
0x60C1A7: mov     eax, [ebx]
0x60C1A9: mov     edx, [eax+5Ch]
0x60C1AC: push    0; a4
0x60C1AE: push    ecx; a3
0x60C1AF: mov     ecx, ebx
0x60C1B1: mov     byte ptr [ebx+94h], 0
0x60C1B8: call    edx
0x60C1BA: mov     ecx, ds:0B33B00h
0x60C1C0: call    sub_45D190
0x60C1C5: mov     eax, [ebx]
0x60C1C7: mov     edx, [eax+154h]
0x60C1CD: mov     ecx, ebx
0x60C1CF: call    edx
0x60C1D1: fldz
0x60C1D3: fld     [esp+6Ch+arg_0]
0x60C1D7: mov     ebp, eax
0x60C1D9: fcom    st(1)
0x60C1DB: fnstsw  ax
0x60C1DD: test    ah, 1
0x60C1E0: jnz     loc_60C57F
0x60C1E6: fadd    dword ptr [ebx+68h]
0x60C1E9: fstp    [esp+6Ch+var_5C]
0x60C1ED: fld     [esp+6Ch+var_5C]
0x60C1F1: fst     dword ptr [ebx+68h]
0x60C1F4: fld     dword ptr ds:0B37048h
0x60C1FA: fcompp
0x60C1FC: fnstsw  ax
0x60C1FE: test    ah, 5
0x60C201: jp      short loc_60C20A
0x60C203: mov     dword ptr [ebx+60h], 3
0x60C20A: mov     eax, [ebx+8]
0x60C20D: shr     eax, 5
0x60C210: test    al, 1
0x60C212: jnz     loc_60C5A2
0x60C218: cmp     dword ptr [ebx+60h], 0
0x60C21C: jnz     loc_60C477
0x60C222: mov     ecx, ebx; this
0x60C224: fstp    st
0x60C226: call    MobileObject_GetCharProxy
0x60C22B: fldz
0x60C22D: test    eax, eax
0x60C22F: jz      loc_60C477
0x60C235: mov     edx, [ebx]
0x60C237: fst     [esp+6Ch+a3]
0x60C23B: fld     dword ptr [ebx+6Ch]
0x60C23E: mov     eax, [edx+174h]
0x60C244: fmul    [esp+6Ch+arg_0]
0x60C248: mov     ecx, ebx
0x60C24A: fstp    [esp+6Ch+var_2C]
0x60C24E: fstp    [esp+6Ch+var_28]
0x60C252: call    eax
0x60C254: mov     ecx, [eax]
0x60C256: mov     edx, [eax+4]
0x60C259: mov     eax, [eax+8]
0x60C25C: mov     [esp+6Ch+var_3C], ecx
0x60C260: mov     ecx, ebx; this
0x60C262: mov     [esp+6Ch+var_38], edx
0x60C266: mov     [esp+6Ch+var_34], eax
0x60C26A: call    MobileObject_GetCharProxy
0x60C26F: fld     dword ptr [eax+318h]
0x60C275: mov     edx, [ebx]
0x60C277: fstp    [esp+6Ch+var_5C]
0x60C27B: fld     [esp+6Ch+var_5C]
0x60C27F: mov     eax, [edx+174h]
0x60C285: fmul    qword ptr ds:0A372E0h
0x60C28B: mov     ecx, ebx
0x60C28D: fstp    [esp+6Ch+var_5C]
0x60C291: fld     [esp+6Ch+var_5C]
0x60C295: fstp    [esp+6Ch+var_5C]
0x60C299: call    eax
0x60C29B: fld     dword ptr [eax+8]
0x60C29E: fld     [esp+6Ch+var_5C]
0x60C2A2: fcompp
0x60C2A4: fnstsw  ax
0x60C2A6: test    ah, 1
0x60C2A9: jnz     short loc_60C30F
0x60C2AB: fld     dword ptr [ebx+74h]
0x60C2AE: mov     ecx, ebx; this
0x60C2B0: fsub    [esp+6Ch+arg_0]
0x60C2B4: fdiv    dword ptr [ebx+74h]
0x60C2B7: fstp    [esp+6Ch+var_5C]
0x60C2BB: fld     dword ptr [ebx+6Ch]
0x60C2BE: fld     [esp+6Ch+var_5C]
0x60C2C2: fld     st
0x60C2C4: fmulp   st(2), st
0x60C2C6: fxch    st(1)
0x60C2C8: fstp    dword ptr [ebx+6Ch]
0x60C2CB: fmul    dword ptr [ebx+70h]
0x60C2CE: fstp    dword ptr [ebx+70h]
0x60C2D1: call    MobileObject_GetCharProxy
0x60C2D6: fld     [esp+6Ch+var_5C]
0x60C2DA: fstp    dword ptr [eax+324h]
0x60C2E0: fld     dword ptr [ebx+74h]
0x60C2E3: fsub    [esp+6Ch+arg_0]
0x60C2E7: fstp    [esp+6Ch+var_5C]
0x60C2EB: fld     [esp+6Ch+var_5C]
0x60C2EF: fst     dword ptr [ebx+74h]
0x60C2F2: fcomp   dword ptr ds:0A3D65Ch
0x60C2F8: fnstsw  ax
0x60C2FA: test    ah, 5
0x60C2FD: jp      short loc_60C30F
0x60C2FF: push    0
0x60C301: mov     ecx, ebx
0x60C303: call    sub_6079A0
0x60C308: mov     ecx, ebx
0x60C30A: call    sub_60BE90
0x60C30F: mov     edx, [ebx]
0x60C311: fld     [esp+6Ch+arg_0]
0x60C315: mov     edx, [edx+1B4h]
0x60C31B: push    0Fh; a4
0x60C31D: lea     eax, [esp+70h+a3]
0x60C321: push    eax; a3
0x60C322: push    ecx
0x60C323: mov     ecx, ebx
0x60C325: fstp    [esp+78h+a2]; a2
0x60C328: call    edx
0x60C32A: mov     eax, [ebx+60h]
0x60C32D: test    eax, eax
0x60C32F: jz      short loc_60C37A
0x60C331: xor     ecx, ecx
0x60C333: cmp     eax, 3
0x60C336: setz    cl
0x60C339: add     ecx, 2
0x60C33C: mov     esi, ecx
0x60C33E: mov     ecx, ebx
0x60C340: call    sub_60BE90
0x60C345: test    al, al
0x60C347: jz      short loc_60C37A
0x60C349: test    ebp, ebp
0x60C34B: jz      short loc_60C36D
0x60C34D: mov     edx, [ebp+54h]
0x60C350: lea     eax, [ebp+54h]
0x60C353: sub     esp, 0Ch
0x60C356: mov     ecx, esp
0x60C358: mov     [ecx], edx
0x60C35A: mov     edx, [eax+4]
0x60C35D: mov     eax, [eax+8]
0x60C360: mov     [ecx+4], edx
0x60C363: mov     [ecx+8], eax
0x60C366: mov     ecx, ebx; this
0x60C368: call    TESObjectREFR_SetPosition
0x60C36D: mov     [ebx+60h], esi
0x60C370: pop     edi
0x60C371: pop     esi
0x60C372: pop     ebp
0x60C373: pop     ebx
0x60C374: add     esp, 5Ch
0x60C377: retn    4
0x60C37A: mov     edx, [ebx]
0x60C37C: mov     eax, [edx+174h]
0x60C382: mov     ecx, ebx
0x60C384: call    eax
0x60C386: test    ebp, ebp
0x60C388: mov     ecx, [eax]
0x60C38A: mov     edx, [eax+4]
0x60C38D: mov     [esp+6Ch+var_48], ecx
0x60C391: mov     ecx, [eax+8]
0x60C394: mov     [esp+6Ch+var_44], edx
0x60C398: mov     [esp+6Ch+var_40], ecx
0x60C39C: jz      loc_60C5A4
0x60C3A2: mov     edx, [eax]
0x60C3A4: mov     [ebp+54h], edx
0x60C3A7: mov     ecx, [eax+4]
0x60C3AA: mov     [ebp+58h], ecx
0x60C3AD: mov     edx, [eax+8]
0x60C3B0: lea     esi, [ebp+30h]
0x60C3B3: mov     ecx, 9
0x60C3B8: lea     edi, [esp+6Ch+var_24]
0x60C3BC: rep movsd
0x60C3BE: lea     eax, [esp+6Ch+var_50]
0x60C3C2: push    eax
0x60C3C3: lea     ecx, [esp+70h+var_5C]
0x60C3C7: mov     [ebp+5Ch], edx
0x60C3CA: push    ecx
0x60C3CB: lea     edx, [esp+74h+var_4C]
0x60C3CF: push    edx
0x60C3D0: lea     ecx, [esp+78h+var_24]
0x60C3D4: call    sub_711440
0x60C3D9: lea     ecx, [ebx+88h]
0x60C3DF: fld     [esp+6Ch+var_48]
0x60C3E3: fsub    [esp+6Ch+var_3C]
0x60C3E7: fstp    [esp+6Ch+var_5C]
0x60C3EB: mov     eax, [esp+6Ch+var_5C]
0x60C3EF: fld     [esp+6Ch+var_44]
0x60C3F3: mov     [ecx], eax
0x60C3F5: fsub    [esp+6Ch+var_38]
0x60C3F9: fstp    [esp+6Ch+var_58]
0x60C3FD: mov     edx, [esp+6Ch+var_58]
0x60C401: fld     [esp+6Ch+var_40]
0x60C405: mov     [ecx+4], edx
0x60C408: fsub    [esp+6Ch+var_34]
0x60C40C: fstp    [esp+6Ch+var_54]
0x60C410: mov     eax, [esp+6Ch+var_54]
0x60C414: mov     [ecx+8], eax
0x60C417: fld     dword ptr [ebx+90h]
0x60C41D: fstp    qword ptr [esp+6Ch+var_5C]
0x60C421: call    sub_404C90
0x60C426: fdivr   qword ptr [esp+6Ch+var_5C]
0x60C42A: push    ecx
0x60C42B: fstp    [esp+70h+var_5C]
0x60C42F: fld     [esp+70h+var_5C]
0x60C433: fstp    [esp+70h+var_70]; float
0x60C436: call    sub_47D970
0x60C43B: fchs
0x60C43D: fstp    [esp+70h+var_5C]
0x60C441: sub     esp, 8
0x60C444: fld     [esp+78h+var_50]
0x60C448: lea     ecx, [esp+78h+var_24]
0x60C44C: fstp    [esp+78h+var_70]; float
0x60C450: fld     [esp+78h+var_5C]
0x60C454: fstp    [esp+78h+var_74]; float
0x60C458: fld     [esp+78h+var_4C]
0x60C45C: fstp    [esp+78h+a2]; float
0x60C45F: call    sub_7117C0
0x60C464: mov     ecx, 9
0x60C469: lea     esi, [esp+6Ch+var_24]
0x60C46D: lea     edi, [ebp+30h]
0x60C470: rep movsd
0x60C472: jmp     loc_60C583
0x60C477: mov     ecx, [ebx+60h]
0x60C47A: cmp     ecx, 2
0x60C47D: jnz     loc_60C52C
0x60C483: mov     eax, [ebx+5Ch]
0x60C486: test    eax, eax
0x60C488: jz      loc_60C52C
0x60C48E: test    ebp, ebp
0x60C490: fstp    st
0x60C492: mov     ecx, [eax]
0x60C494: jz      loc_60C5A4
0x60C49A: test    ecx, ecx
0x60C49C: jnz     short loc_60C50A
0x60C49E: mov     ecx, [ebp+88h]
0x60C4A4: mov     edx, [ebp+8Ch]
0x60C4AA: sub     esp, 0Ch
0x60C4AD: mov     eax, esp
0x60C4AF: mov     [eax], ecx
0x60C4B1: mov     ecx, [ebp+90h]
0x60C4B7: mov     [eax+4], edx
0x60C4BA: mov     [eax+8], ecx
0x60C4BD: mov     ecx, ebx; this
0x60C4BF: call    TESObjectREFR_SetPosition
0x60C4C4: mov     edx, [ebx+5Ch]
0x60C4C7: mov     ecx, [edx+28h]; this
0x60C4CA: xor     esi, esi
0x60C4CC: test    ecx, ecx
0x60C4CE: jz      short loc_60C4D7
0x60C4D0: call    TESObjectREFR_GetParentCell
0x60C4D5: mov     esi, eax
0x60C4D7: mov     ecx, ebx; this
0x60C4D9: call    TESObjectREFR_GetParentCell
0x60C4DE: cmp     esi, eax
0x60C4E0: jz      loc_60C583
0x60C4E6: test    esi, esi
0x60C4E8: jnz     short loc_60C4FD
0x60C4EA: mov     eax, [ebx]
0x60C4EC: mov     edx, [eax+8Ch]
0x60C4F2: push    1
0x60C4F4: mov     ecx, ebx
0x60C4F6: call    edx
0x60C4F8: jmp     loc_60C583
0x60C4FD: push    ebx
0x60C4FE: mov     ecx, offset ActorProcessManager_ptr
0x60C503: call    sub_6748B0
0x60C508: jmp     short loc_60C583
0x60C50A: cmp     ecx, 1
0x60C50D: jnz     short loc_60C583
0x60C50F: mov     eax, [eax+28h]
0x60C512: test    eax, eax
0x60C514: jz      short loc_60C51C
0x60C516: cmp     dword ptr [eax+3Ch], 0
0x60C51A: jnz     short loc_60C583
0x60C51C: mov     eax, [ebx]
0x60C51E: mov     edx, [eax+8Ch]
0x60C524: push    1
0x60C526: mov     ecx, ebx
0x60C528: call    edx
0x60C52A: jmp     short loc_60C583
0x60C52C: cmp     ecx, 3
0x60C52F: jnz     short loc_60C581
0x60C531: fld     dword ptr [ebx+64h]
0x60C534: fld     [esp+6Ch+arg_0]
0x60C538: fdiv    qword ptr ds:0A30E48h
0x60C53E: fsubp   st(1), st
0x60C540: fstp    [esp+6Ch+var_4C]
0x60C544: fld     [esp+6Ch+var_4C]
0x60C548: fst     dword ptr [ebx+64h]
0x60C54B: fcomp   st(1)
0x60C54D: fnstsw  ax
0x60C54F: test    ah, 41h
0x60C552: jp      short loc_60C567
0x60C554: mov     eax, [ebx]
0x60C556: fstp    dword ptr [ebx+64h]
0x60C559: mov     edx, [eax+8Ch]
0x60C55F: push    1
0x60C561: mov     ecx, ebx
0x60C563: call    edx
0x60C565: jmp     short loc_60C569
0x60C567: fstp    st
0x60C569: test    ebp, ebp
0x60C56B: jz      short loc_60C5A4
0x60C56D: fld     dword ptr [ebx+64h]
0x60C570: push    ecx
0x60C571: fstp    [esp+70h+var_70]; float
0x60C574: push    ebp; int
0x60C575: call    sub_4A2A90
0x60C57A: add     esp, 8
0x60C57D: jmp     short loc_60C583
0x60C57F: fstp    st
0x60C581: fstp    st
0x60C583: test    ebp, ebp
0x60C585: jz      short loc_60C5A4
0x60C587: fld     [esp+6Ch+arg_0]
0x60C58B: push    1; a3
0x60C58D: push    ecx
0x60C58E: mov     ecx, ebp; this
0x60C590: fstp    [esp+74h+var_74]; a2
0x60C593: call    NiAVObject_UpdateNiAVObject
0x60C598: pop     edi
0x60C599: pop     esi
0x60C59A: pop     ebp
0x60C59B: pop     ebx
0x60C59C: add     esp, 5Ch
0x60C59F: retn    4
0x60C5A2: fstp    st
0x60C5A4: pop     edi
0x60C5A5: pop     esi
0x60C5A6: pop     ebp
0x60C5A7: pop     ebx
0x60C5A8: add     esp, 5Ch
0x60C5AB: retn    4
