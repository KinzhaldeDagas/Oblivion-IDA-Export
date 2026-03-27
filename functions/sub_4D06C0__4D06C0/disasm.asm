0x4D06C0: push    0FFFFFFFFh
0x4D06C2: push    offset SEH_4D06C0
0x4D06C7: mov     eax, large fs:0
0x4D06CD: push    eax
0x4D06CE: sub     esp, 84h
0x4D06D4: push    ebx
0x4D06D5: push    ebp
0x4D06D6: push    esi
0x4D06D7: push    edi
0x4D06D8: mov     eax, ds:0B30AACh
0x4D06DD: xor     eax, esp
0x4D06DF: push    eax
0x4D06E0: lea     eax, [esp+0A4h+var_C]
0x4D06E7: mov     large fs:0, eax
0x4D06ED: mov     esi, ecx
0x4D06EF: mov     [esp+0A4h+var_7C], esi
0x4D06F3: xor     ebp, ebp
0x4D06F5: mov     [esp+0A4h+var_5C], ebp
0x4D06F9: test    byte ptr [esi+24h], 1
0x4D06FD: jz      short loc_4D070D
0x4D06FF: mov     eax, [esp+0A4h+arg_0]
0x4D0706: mov     [eax], ebp
0x4D0708: jmp     loc_4D0BFC
0x4D070D: push    ebp
0x4D070E: call    GetShadowSceneNode
0x4D0713: fld     dword ptr ds:0A3F3E0h
0x4D0719: mov     ecx, ds:0B3F9ACh
0x4D071F: fstp    [esp+0A8h+var_A8]; float
0x4D0722: fld     dword ptr ds:0A3721Ch
0x4D0728: mov     edx, ds:0B3F9B0h
0x4D072E: mov     edi, eax
0x4D0730: mov     eax, ds:0B3F9A8h
0x4D0735: sub     esp, 8
0x4D0738: mov     dword ptr [esp+0B0h+var_6C+4], ecx
0x4D073C: fst     [esp+0B0h+var_AC]; float
0x4D0740: lea     ecx, [esp+0B0h+var_30]
0x4D0747: fstp    [esp+0B0h+var_B0]; float
0x4D074A: mov     [esp+0B0h+var_78], edi
0x4D074E: mov     dword ptr [esp+0B0h+var_6C], eax
0x4D0752: mov     [esp+0B0h+var_64], edx
0x4D0756: call    sub_711580
0x4D075B: push    ebp
0x4D075C: lea     ecx, [esp+0A8h+a2]
0x4D0760: call    NiFrustum__SetOrtho
0x4D0765: fld     dword ptr ds:0A2FE7Ch
0x4D076B: lea     eax, [esp+0A4h+var_58]
0x4D076F: fstp    [esp+0A4h+var_3C]
0x4D0773: push    eax
0x4D0774: mov     ecx, esi; this
0x4D0776: mov     byte ptr [esp+0A8h+var_34], 1
0x4D077B: call    sub_4CE3C0
0x4D0780: mov     ecx, eax
0x4D0782: call    sub_4C46B0
0x4D0787: mov     ecx, [eax]
0x4D0789: mov     edx, [eax+4]
0x4D078C: mov     [esp+0A4h+var_74], ecx
0x4D0790: mov     cl, [esi+24h]
0x4D0793: and     cl, 1
0x4D0796: mov     [esp+0A4h+var_70], edx
0x4D079A: jnz     short loc_4D07A7
0x4D079C: mov     eax, [esi+3Ch]
0x4D079F: cmp     eax, ebp
0x4D07A1: jz      short loc_4D07A7
0x4D07A3: mov     eax, [eax]
0x4D07A5: jmp     short loc_4D07A9
0x4D07A7: xor     eax, eax
0x4D07A9: shl     eax, 0Ch
0x4D07AC: add     eax, 880h
0x4D07B1: test    cl, cl
0x4D07B3: mov     [esp+0A4h+var_88], eax
0x4D07B7: fild    [esp+0A4h+var_88]
0x4D07BB: fstp    dword ptr [esp+0A4h+var_6C]
0x4D07BF: jnz     short loc_4D07CD
0x4D07C1: mov     esi, [esi+3Ch]
0x4D07C4: cmp     esi, ebp
0x4D07C6: jz      short loc_4D07CD
0x4D07C8: mov     eax, [esi+4]
0x4D07CB: jmp     short loc_4D07CF
0x4D07CD: xor     eax, eax
0x4D07CF: shl     eax, 0Ch
0x4D07D2: add     eax, 880h
0x4D07D7: mov     [esp+0A4h+var_88], eax
0x4D07DB: fild    [esp+0A4h+var_88]
0x4D07DF: push    124h; Size
0x4D07E4: fsub    qword ptr ds:0A46970h
0x4D07EA: fstp    dword ptr [esp+0A8h+var_6C+4]
0x4D07EE: fld     [esp+0A8h+var_70]
0x4D07F2: fadd    qword ptr ds:0A46968h
0x4D07F8: fstp    [esp+0A8h+var_64]
0x4D07FC: fld     dword ptr ds:0A46964h
0x4D0802: fst     [esp+0A8h+a2]
0x4D0806: fld     dword ptr ds:0A46960h
0x4D080C: fst     [esp+0A8h+var_48]
0x4D0810: fstp    [esp+0A8h+var_44]
0x4D0814: fstp    [esp+0A8h+var_40]
0x4D0818: fld     [esp+0A8h+var_64]
0x4D081C: fsub    [esp+0A8h+var_74]
0x4D0820: fadd    qword ptr ds:0A3F3E8h
0x4D0826: fstp    [esp+0A8h+var_38]
0x4D082A: call    FormHeapAlloc
0x4D082F: add     esp, 4
0x4D0832: mov     [esp+0A4h+var_74], eax
0x4D0836: cmp     eax, ebp
0x4D0838: mov     [esp+0A4h+var_4], 1
0x4D0843: jz      short loc_4D0850
0x4D0845: mov     ecx, eax
0x4D0847: call    sub_70D590
0x4D084C: mov     ebx, eax
0x4D084E: jmp     short loc_4D0852
0x4D0850: xor     ebx, ebx
0x4D0852: cmp     ebx, ebp
0x4D0854: mov     [esp+0A4h+var_74], ebx
0x4D0858: jz      short loc_4D0864
0x4D085A: lea     eax, [ebx+4]
0x4D085D: push    eax; lpAddend
0x4D085E: call    dword ptr ds:0A28078h
0x4D0864: push    0DCh ; 'Ü'; Size
0x4D0869: mov     [esp+0A8h+var_4], 2
0x4D0874: call    FormHeapAlloc
0x4D0879: add     esp, 4
0x4D087C: mov     [esp+0A4h+var_58], eax
0x4D0880: cmp     eax, ebp
0x4D0882: mov     byte ptr [esp+0A4h+var_4], 3
0x4D088A: jz      short loc_4D0896
0x4D088C: push    ebp
0x4D088D: mov     ecx, eax; this
0x4D088F: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4D0894: mov     ebp, eax
0x4D0896: test    ebp, ebp
0x4D0898: mov     [esp+0A4h+var_58], ebp
0x4D089C: jz      short loc_4D08A8
0x4D089E: lea     ecx, [ebp+4]
0x4D08A1: push    ecx; lpAddend
0x4D08A2: call    dword ptr ds:0A28078h
0x4D08A8: mov     edx, [ebp+0]
0x4D08AB: mov     eax, [edx+84h]
0x4D08B1: push    1
0x4D08B3: push    ebx
0x4D08B4: mov     ecx, ebp
0x4D08B6: mov     byte ptr [esp+0ACh+var_4], 4
0x4D08BE: call    eax
0x4D08C0: mov     ecx, dword ptr [esp+0A4h+var_6C]
0x4D08C4: mov     edx, dword ptr [esp+0A4h+var_6C+4]
0x4D08C8: mov     eax, [esp+0A4h+var_64]
0x4D08CC: mov     [ebp+54h], ecx
0x4D08CF: mov     [ebp+58h], edx
0x4D08D2: mov     [ebp+5Ch], eax
0x4D08D5: mov     edx, [edi]
0x4D08D7: mov     eax, [edx+84h]
0x4D08DD: push    1
0x4D08DF: push    ebp
0x4D08E0: mov     ecx, edi
0x4D08E2: call    eax
0x4D08E4: lea     edi, [ebx+30h]
0x4D08E7: mov     ecx, 9
0x4D08EC: lea     esi, [esp+0A4h+var_30]
0x4D08F0: rep movsd
0x4D08F2: lea     ecx, [esp+0A4h+a2]
0x4D08F6: push    ecx; a2
0x4D08F7: mov     ecx, ebx; this
0x4D08F9: call    Camera_SetFrustum
0x4D08FE: push    1; a3
0x4D0900: fldz
0x4D0902: push    ecx
0x4D0903: mov     ecx, ebp; this
0x4D0905: fstp    [esp+0ACh+var_AC]; a2
0x4D0908: call    NiAVObject_UpdateNiAVObject
0x4D090D: fldz
0x4D090F: push    1; a3
0x4D0911: push    ecx
0x4D0912: fstp    [esp+0ACh+var_AC]; a2
0x4D0915: mov     ecx, ebx; this
0x4D0917: call    NiAVObject_UpdateNiAVObject
0x4D091C: push    1
0x4D091E: call    sub_55F7E0
0x4D0923: push    1; float
0x4D0925: push    ebx; int
0x4D0926: mov     byte ptr [eax+23h], 1
0x4D092A: call    sub_55FA50
0x4D092F: mov     edi, [esp+0B0h+var_7C]
0x4D0933: add     esp, 0Ch
0x4D0936: mov     ecx, edi
0x4D0938: call    sub_4CD000
0x4D093D: mov     eax, [edi+54h]
0x4D0940: xor     esi, esi
0x4D0942: cmp     eax, esi
0x4D0944: mov     byte ptr [esp+0A4h+var_90+3], 0
0x4D0949: mov     byte ptr [esp+0A4h+var_8C], 0
0x4D094E: jz      short loc_4D096F
0x4D0950: cmp     [eax+0B6h], si
0x4D0957: ja      short loc_4D0961
0x4D0959: xor     eax, eax
0x4D095B: mov     [esp+0A4h+var_80], eax
0x4D095F: jmp     short loc_4D0975
0x4D0961: mov     edx, [eax+0B0h]
0x4D0967: mov     eax, [edx]
0x4D0969: mov     [esp+0A4h+var_80], eax
0x4D096D: jmp     short loc_4D0975
0x4D096F: mov     [esp+0A4h+var_80], esi
0x4D0973: mov     eax, esi
0x4D0975: cmp     eax, esi
0x4D0977: mov     edx, 1
0x4D097C: jz      short loc_4D098B
0x4D097E: mov     cl, [eax+18h]
0x4D0981: and     cl, dl
0x4D0983: or      [eax+18h], dx
0x4D0987: mov     byte ptr [esp+0A4h+var_90+3], cl
0x4D098B: mov     edi, [edi+54h]
0x4D098E: cmp     edi, esi
0x4D0990: jz      short loc_4D09B2
0x4D0992: cmp     [edi+0B6h], dx
0x4D0999: ja      short loc_4D09A3
0x4D099B: xor     eax, eax
0x4D099D: mov     [esp+0A4h+var_88], eax
0x4D09A1: jmp     short loc_4D09B8
0x4D09A3: mov     ecx, [edi+0B0h]
0x4D09A9: mov     eax, [ecx+4]
0x4D09AC: mov     [esp+0A4h+var_88], eax
0x4D09B0: jmp     short loc_4D09B8
0x4D09B2: mov     [esp+0A4h+var_88], esi
0x4D09B6: mov     eax, esi
0x4D09B8: cmp     eax, esi
0x4D09BA: jz      short loc_4D09CA
0x4D09BC: mov     cl, [eax+18h]
0x4D09BF: and     cl, 1
0x4D09C2: or      [eax+18h], dx
0x4D09C6: mov     byte ptr [esp+0A4h+var_8C], cl
0x4D09CA: call    Sky_CreateOrGetGlobalObject
0x4D09CF: mov     edi, [eax+4]
0x4D09D2: cmp     edi, esi
0x4D09D4: mov     byte ptr [esp+0A4h+var_8C+2], 0
0x4D09D9: jz      short loc_4D09E9
0x4D09DB: mov     al, [edi+18h]
0x4D09DE: and     al, 1
0x4D09E0: or      word ptr [edi+18h], 1
0x4D09E5: mov     byte ptr [esp+0A4h+var_8C+2], al
0x4D09E9: cmp     edi, esi
0x4D09EB: mov     eax, ds:0B333DCh
0x4D09F0: mov     [esp+0A4h+var_50], eax
0x4D09F4: mov     byte ptr [esp+0A4h+var_8C+1], 0
0x4D09F9: jz      short loc_4D0A0A
0x4D09FB: mov     cl, [eax+18h]
0x4D09FE: and     cl, 1
0x4D0A01: or      word ptr [eax+18h], 1
0x4D0A06: mov     byte ptr [esp+0A4h+var_8C+1], cl
0x4D0A0A: cmp     byte ptr ds:0B42D40h, 0
0x4D0A11: mov     esi, ds:0B36094h
0x4D0A17: mov     byte ptr [esp+0A4h+var_8C+3], 0
0x4D0A1C: jz      short loc_4D0A42
0x4D0A1E: cmp     byte ptr ds:0B42F3Eh, 0
0x4D0A25: jz      short loc_4D0A42
0x4D0A27: cmp     dword ptr ds:0B42F48h, 2
0x4D0A2E: jl      short loc_4D0A42
0x4D0A30: test    esi, esi
0x4D0A32: jz      short loc_4D0A42
0x4D0A34: mov     al, [esi+18h]
0x4D0A37: and     al, 1
0x4D0A39: or      word ptr [esi+18h], 1
0x4D0A3E: mov     byte ptr [esp+0A4h+var_8C+3], al
0x4D0A42: mov     cl, ds:0B0727Ch
0x4D0A48: push    ebx
0x4D0A49: lea     edx, [esp+0A8h+var_60]
0x4D0A4D: mov     byte ptr [esp+0A8h+var_84+3], cl
0x4D0A51: mov     ecx, [esp+0A8h+var_7C]
0x4D0A55: push    edx
0x4D0A56: mov     byte ptr ds:0B0727Ch, 0
0x4D0A5D: call    sub_4D0190
0x4D0A62: cmp     byte ptr ds:0B42D40h, 0
0x4D0A69: mov     al, byte ptr [esp+0A4h+var_84+3]
0x4D0A6D: mov     byte ptr [esp+0A4h+var_4], 5
0x4D0A75: mov     ds:0B0727Ch, al
0x4D0A7A: mov     edx, 0FFFEh
0x4D0A7F: jz      short loc_4D0AAF
0x4D0A81: cmp     byte ptr ds:0B42F3Eh, 0
0x4D0A88: jz      short loc_4D0AAF
0x4D0A8A: cmp     dword ptr ds:0B42F48h, 2
0x4D0A91: jl      short loc_4D0AAF
0x4D0A93: test    esi, esi
0x4D0A95: mov     ecx, 1
0x4D0A9A: jz      short loc_4D0AB4
0x4D0A9C: cmp     byte ptr [esp+0A4h+var_8C+3], 0
0x4D0AA1: jz      short loc_4D0AA9
0x4D0AA3: or      [esi+18h], cx
0x4D0AA7: jmp     short loc_4D0AB4
0x4D0AA9: and     [esi+18h], dx
0x4D0AAD: jmp     short loc_4D0AB4
0x4D0AAF: mov     ecx, 1
0x4D0AB4: mov     eax, [esp+0A4h+var_50]
0x4D0AB8: test    eax, eax
0x4D0ABA: jz      short loc_4D0ACD
0x4D0ABC: cmp     byte ptr [esp+0A4h+var_8C+1], 0
0x4D0AC1: jz      short loc_4D0AC9
0x4D0AC3: or      [eax+18h], cx
0x4D0AC7: jmp     short loc_4D0ACD
0x4D0AC9: and     [eax+18h], dx
0x4D0ACD: test    edi, edi
0x4D0ACF: jz      short loc_4D0AE2
0x4D0AD1: cmp     byte ptr [esp+0A4h+var_8C+2], 0
0x4D0AD6: jz      short loc_4D0ADE
0x4D0AD8: or      [edi+18h], cx
0x4D0ADC: jmp     short loc_4D0AE2
0x4D0ADE: and     [edi+18h], dx
0x4D0AE2: mov     eax, [esp+0A4h+var_80]
0x4D0AE6: test    eax, eax
0x4D0AE8: jz      short loc_4D0AFB
0x4D0AEA: cmp     byte ptr [esp+0A4h+var_90+3], 0
0x4D0AEF: jz      short loc_4D0AF7
0x4D0AF1: or      [eax+18h], cx
0x4D0AF5: jmp     short loc_4D0AFB
0x4D0AF7: and     [eax+18h], dx
0x4D0AFB: mov     eax, [esp+0A4h+var_88]
0x4D0AFF: test    eax, eax
0x4D0B01: jz      short loc_4D0B14
0x4D0B03: cmp     byte ptr [esp+0A4h+var_8C], 0
0x4D0B08: jz      short loc_4D0B10
0x4D0B0A: or      [eax+18h], cx
0x4D0B0E: jmp     short loc_4D0B14
0x4D0B10: and     [eax+18h], dx
0x4D0B14: mov     edx, ds:0B333CCh
0x4D0B1A: mov     eax, [edx+0DCh]
0x4D0B20: push    ecx; float
0x4D0B21: push    eax; int
0x4D0B22: call    sub_55FA50
0x4D0B27: push    1
0x4D0B29: call    sub_55F7E0
0x4D0B2E: mov     ecx, [esp+0B0h+var_7C]
0x4D0B32: add     esp, 0Ch
0x4D0B35: mov     byte ptr [eax+23h], 0
0x4D0B39: call    sub_4CD000
0x4D0B3E: mov     ecx, [esp+0A4h+var_78]
0x4D0B42: mov     eax, [ecx]
0x4D0B44: mov     eax, [eax+88h]
0x4D0B4A: push    ebp
0x4D0B4B: lea     edx, [esp+0A8h+var_78]
0x4D0B4F: push    edx
0x4D0B50: call    eax
0x4D0B52: mov     eax, [esp+0A4h+var_78]
0x4D0B56: test    eax, eax
0x4D0B58: mov     edi, ds:0A2807Ch
0x4D0B5E: jz      short loc_4D0B7A
0x4D0B60: mov     esi, eax
0x4D0B62: add     eax, 4
0x4D0B65: push    eax; lpAddend
0x4D0B66: call    edi ; InterlockedDecrement
0x4D0B68: test    eax, eax
0x4D0B6A: jnz     short loc_4D0B7A
0x4D0B6C: test    esi, esi
0x4D0B6E: jz      short loc_4D0B7A
0x4D0B70: mov     edx, [esi]
0x4D0B72: mov     eax, [edx]
0x4D0B74: push    1
0x4D0B76: mov     ecx, esi
0x4D0B78: call    eax
0x4D0B7A: lea     ecx, [ebp+4]
0x4D0B7D: push    ecx; lpAddend
0x4D0B7E: call    edi ; InterlockedDecrement
0x4D0B80: test    eax, eax
0x4D0B82: jnz     short loc_4D0B8F
0x4D0B84: mov     edx, [ebp+0]
0x4D0B87: mov     eax, [edx]
0x4D0B89: push    1
0x4D0B8B: mov     ecx, ebp
0x4D0B8D: call    eax
0x4D0B8F: lea     ecx, [ebx+4]
0x4D0B92: xor     esi, esi
0x4D0B94: push    ecx; lpAddend
0x4D0B95: mov     [esp+0A8h+var_58], esi
0x4D0B99: call    edi ; InterlockedDecrement
0x4D0B9B: test    eax, eax
0x4D0B9D: jnz     short loc_4D0BA9
0x4D0B9F: mov     edx, [ebx]
0x4D0BA1: mov     eax, [edx]
0x4D0BA3: push    1
0x4D0BA5: mov     ecx, ebx
0x4D0BA7: call    eax
0x4D0BA9: mov     eax, [esp+0A4h+var_60]
0x4D0BAD: cmp     eax, esi
0x4D0BAF: mov     ebx, [esp+0A4h+arg_0]
0x4D0BB6: mov     [esp+0A4h+var_74], esi
0x4D0BBA: mov     [ebx], eax
0x4D0BBC: jz      short loc_4D0BCC
0x4D0BBE: add     eax, 4
0x4D0BC1: push    eax; lpAddend
0x4D0BC2: call    dword ptr ds:0A28078h
0x4D0BC8: mov     eax, [esp+0A4h+var_60]
0x4D0BCC: cmp     eax, esi
0x4D0BCE: mov     [esp+0A4h+var_5C], 1
0x4D0BD6: mov     byte ptr [esp+0A4h+var_4], 4
0x4D0BDE: jz      short loc_4D0BFA
0x4D0BE0: mov     esi, eax
0x4D0BE2: add     eax, 4
0x4D0BE5: push    eax; lpAddend
0x4D0BE6: call    edi ; InterlockedDecrement
0x4D0BE8: test    eax, eax
0x4D0BEA: jnz     short loc_4D0BFA
0x4D0BEC: test    esi, esi
0x4D0BEE: jz      short loc_4D0BFA
0x4D0BF0: mov     edx, [esi]
0x4D0BF2: mov     eax, [edx]
0x4D0BF4: push    1
0x4D0BF6: mov     ecx, esi
0x4D0BF8: call    eax
0x4D0BFA: mov     eax, ebx
0x4D0BFC: mov     ecx, dword ptr [esp+0A4h+var_C]
0x4D0C03: mov     large fs:0, ecx
0x4D0C0A: pop     ecx
0x4D0C0B: pop     edi
0x4D0C0C: pop     esi
0x4D0C0D: pop     ebp
0x4D0C0E: pop     ebx
0x4D0C0F: add     esp, 90h
0x4D0C15: retn    4
