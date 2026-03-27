0x4E31E0: mov     eax, ds:0B33B00h
0x4E31E5: sub     esp, 48h
0x4E31E8: cmp     byte ptr [eax+7Ch], 51h ; 'Q'
0x4E31EC: push    esi
0x4E31ED: mov     esi, ecx
0x4E31EF: jnb     short loc_4E3204
0x4E31F1: mov     ecx, [esp+4Ch+arg_0]
0x4E31F5: push    ecx
0x4E31F6: mov     ecx, esi
0x4E31F8: call    sub_4E0AB0
0x4E31FD: pop     esi
0x4E31FE: add     esp, 48h
0x4E3201: retn    4
0x4E3204: push    ebx
0x4E3205: push    ebp
0x4E3206: mov     ebp, [esi+3Ch]
0x4E3209: xor     ebx, ebx
0x4E320B: cmp     ebp, ebx
0x4E320D: jz      loc_4E3451
0x4E3213: push    edi
0x4E3214: push    1; a2
0x4E3216: lea     edx, [esp+5Ch+a1.member]
0x4E321A: push    edx; a1
0x4E321B: mov     [esp+60h+a1.member.type], bl
0x4E321F: mov     word ptr [esp+60h+a1.member.pad+1], bx
0x4E3224: mov     word ptr [esp+60h+a1.member.flags], bx
0x4E3229: mov     [esp+60h+a1.member.refID], ebx
0x4E322D: mov     [esp+60h+a1.member.modlist.data], ebx
0x4E3231: mov     [esp+60h+a1.member.modlist.next], ebx
0x4E3235: call    TESForm_LoadDataFromCurrentSaveGame
0x4E323A: push    2; a2
0x4E323C: lea     eax, [esp+5Ch+a1]
0x4E3240: push    eax; a1
0x4E3241: mov     ecx, esi
0x4E3243: call    TESForm_LoadDataFromCurrentSaveGame
0x4E3248: mov     edx, [esi]
0x4E324A: mov     eax, [edx+190h]
0x4E3250: mov     ecx, esi
0x4E3252: xor     edi, edi
0x4E3254: call    eax
0x4E3256: test    al, al
0x4E3258: jz      short loc_4E326F
0x4E325A: test    [esp+58h+a1.member.type], 8
0x4E325F: mov     edi, esi
0x4E3261: mov     ecx, esi
0x4E3263: jz      short loc_4E3269
0x4E3265: push    1
0x4E3267: jmp     short loc_4E326A
0x4E3269: push    ebx
0x4E326A: call    sub_5EF9B0
0x4E326F: lea     ecx, [esp+58h+anonymous_2]
0x4E3273: push    ecx
0x4E3274: mov     ecx, esi
0x4E3276: mov     [esp+5Ch+anonymous_2], bl
0x4E327A: mov     [esp+5Ch+anonymous_0], bx
0x4E327F: mov     [esp+5Ch+anonymous_1], bx
0x4E3284: mov     [esp+5Ch+var_28], ebx
0x4E3288: mov     [esp+5Ch+var_24], ebx
0x4E328C: mov     [esp+5Ch+var_20], ebx
0x4E3290: call    sub_4E0970
0x4E3295: mov     eax, dword ptr [esp+58h+anonymous_0]
0x4E3299: mov     edx, dword ptr [esp+58h+anonymous_1]
0x4E329D: add     edx, eax
0x4E329F: movzx   eax, dx
0x4E32A2: mov     dx, word ptr [esp+58h+a1.vtbl]
0x4E32A7: cmp     dx, ax
0x4E32AA: jz      loc_4E3357
0x4E32B0: mov     ecx, [esi+0Ch]
0x4E32B3: movzx   eax, ax
0x4E32B6: movzx   edx, dx
0x4E32B9: push    eax
0x4E32BA: mov     eax, [esi]
0x4E32BC: push    edx
0x4E32BD: mov     edx, [eax+0D4h]
0x4E32C3: push    ecx
0x4E32C4: mov     ecx, esi
0x4E32C6: call    edx
0x4E32C8: push    eax; ArgList
0x4E32C9: push    offset aHavokDataBoneC; "Havok data bone count differs on refere"...
0x4E32CE: call    PrintError
0x4E32D3: mov     al, [esp+6Ch+anonymous_2]
0x4E32D7: mov     cl, [esp+6Ch+a1.member.type]
0x4E32DB: and     al, 8
0x4E32DD: and     cl, 8
0x4E32E0: add     esp, 14h
0x4E32E3: cmp     cl, al
0x4E32E5: jz      short loc_4E3312
0x4E32E7: cmp     al, bl
0x4E32E9: mov     edx, offset aTrue; "true"
0x4E32EE: jnz     short loc_4E32F5
0x4E32F0: mov     edx, offset aFalse; "false"
0x4E32F5: cmp     cl, bl
0x4E32F7: mov     eax, offset aTrue; "true"
0x4E32FC: jnz     short loc_4E3303
0x4E32FE: mov     eax, offset aFalse; "false"
0x4E3303: push    edx
0x4E3304: push    eax; ArgList
0x4E3305: push    offset aBoneCountDiffe; "Bone count difference likely due to wea"...
0x4E330A: call    PrintError
0x4E330F: add     esp, 0Ch
0x4E3312: movzx   eax, word ptr [esp+58h+arg_0]
0x4E3317: mov     ecx, ds:0B33B00h
0x4E331D: sub     eax, 3
0x4E3320: push    eax
0x4E3321: call    SaveLoad_AdvanceBufferOffset
0x4E3326: mov     edx, [esi]
0x4E3328: mov     eax, [edx+190h]
0x4E332E: mov     ecx, esi
0x4E3330: call    eax
0x4E3332: test    al, al
0x4E3334: jz      short loc_4E334D
0x4E3336: fldz
0x4E3338: push    ebx; int
0x4E3339: push    ecx
0x4E333A: fstp    [esp+60h+a2]; float
0x4E333D: push    1; int
0x4E333F: push    offset Vector3_InitValue?; int
0x4E3344: push    ebp; int
0x4E3345: call    sub_8AB440
0x4E334A: add     esp, 14h
0x4E334D: pop     edi
0x4E334E: pop     ebp
0x4E334F: pop     ebx
0x4E3350: pop     esi
0x4E3351: add     esp, 48h
0x4E3354: retn    4
0x4E3357: push    ebp
0x4E3358: mov     [esp+5Ch+a1.member.refID], esi
0x4E335C: mov     [esp+5Ch+a1.member.modlist.data], ebp
0x4E3360: call    sub_4A05E0
0x4E3365: mov     edx, [esi]
0x4E3367: lea     ecx, [esp+5Ch+a1.member]
0x4E336B: mov     [esp+5Ch+a1.member.modlist.next], eax
0x4E336F: mov     eax, [edx+190h]
0x4E3375: mov     [esp+5Ch+var_10], ecx
0x4E3379: add     esp, 4
0x4E337C: mov     ecx, esi
0x4E337E: mov     [esp+58h+var_14], 0Fh
0x4E3386: mov     [esp+58h+var_18], 1
0x4E338B: call    eax
0x4E338D: test    al, al
0x4E338F: jz      short loc_4E33AD
0x4E3391: push    ebx; a4
0x4E3392: push    1; a3
0x4E3394: push    1; a2
0x4E3396: push    ebp; a1
0x4E3397: call    sub_88D070
0x4E339C: fldz
0x4E339E: add     esp, 10h
0x4E33A1: push    ebx; a3
0x4E33A2: push    ecx
0x4E33A3: mov     ecx, ebp; this
0x4E33A5: fstp    [esp+60h+a2]; a2
0x4E33A8: call    NiAVObject_UpdateNiAVObject
0x4E33AD: push    offset sub_4DAE60
0x4E33B2: lea     ecx, [esp+5Ch+var_1C]
0x4E33B6: push    ecx
0x4E33B7: push    ebp
0x4E33B8: call    sub_88A7D0
0x4E33BD: add     esp, 0Ch
0x4E33C0: cmp     edi, ebx
0x4E33C2: jz      short loc_4E3425
0x4E33C4: mov     edx, [edi]
0x4E33C6: mov     eax, [edx+1A0h]
0x4E33CC: mov     ecx, edi
0x4E33CE: call    eax
0x4E33D0: test    al, al
0x4E33D2: jz      short loc_4E3425
0x4E33D4: push    1
0x4E33D6: push    ebp
0x4E33D7: call    sub_8A5580
0x4E33DC: push    ebx; a4
0x4E33DD: push    1; a3
0x4E33DF: push    1; a2
0x4E33E1: push    ebp; a1
0x4E33E2: call    sub_88D070
0x4E33E7: mov     edx, [edi]
0x4E33E9: mov     eax, [edx+164h]
0x4E33EF: add     esp, 18h
0x4E33F2: mov     ecx, edi
0x4E33F4: call    eax
0x4E33F6: mov     edi, eax
0x4E33F8: cmp     edi, ebx
0x4E33FA: jz      short loc_4E3425
0x4E33FC: fldz
0x4E33FE: push    ecx
0x4E33FF: fstp    [esp+5Ch+var_5C]; float
0x4E3402: mov     ecx, edi
0x4E3404: push    5; int
0x4E3406: call    sub_470FC0
0x4E340B: mov     ecx, ds:0B3F9A8h
0x4E3411: mov     [edi+18h], ecx
0x4E3414: mov     edx, ds:0B3F9ACh
0x4E341A: mov     [edi+1Ch], edx
0x4E341D: mov     eax, ds:0B3F9B0h
0x4E3422: mov     [edi+20h], eax
0x4E3425: mov     edx, [esi]
0x4E3427: mov     eax, [edx+190h]
0x4E342D: mov     ecx, esi
0x4E342F: call    eax
0x4E3431: test    al, al
0x4E3433: jnz     loc_4E334D
0x4E3439: fldz
0x4E343B: push    ebx; a3
0x4E343C: push    ecx
0x4E343D: fstp    [esp+60h+a2]; a2
0x4E3440: mov     ecx, ebp; this
0x4E3442: call    NiAVObject_UpdateNiAVObject
0x4E3447: pop     edi
0x4E3448: pop     ebp
0x4E3449: pop     ebx
0x4E344A: pop     esi
0x4E344B: add     esp, 48h
0x4E344E: retn    4
0x4E3451: mov     eax, [esi+0Ch]
0x4E3454: mov     edx, [esi]
0x4E3456: push    eax
0x4E3457: mov     eax, [edx+0D4h]
0x4E345D: call    eax
0x4E345F: push    eax; ArgList
0x4E3460: push    offset aCannotLoadHavo; "Cannot load Havok data for reference %s"...
0x4E3465: call    PrintError
0x4E346A: movzx   ecx, word ptr [esp+60h+arg_0]
0x4E346F: add     esp, 0Ch
0x4E3472: push    ecx
0x4E3473: mov     ecx, ds:0B33B00h
0x4E3479: call    SaveLoad_AdvanceBufferOffset
0x4E347E: pop     ebp
0x4E347F: pop     ebx
0x4E3480: pop     esi
0x4E3481: add     esp, 48h
0x4E3484: retn    4
