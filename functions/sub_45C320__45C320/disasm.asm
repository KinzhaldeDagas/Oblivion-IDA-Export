0x45C320: sub     esp, 10h
0x45C323: push    ebx
0x45C324: push    ebp
0x45C325: push    esi; int
0x45C326: push    edi; int
0x45C327: mov     edi, ecx
0x45C329: or      dword ptr [edi+18h], 8
0x45C32D: lea     esi, [edi+38h]
0x45C330: test    esi, esi
0x45C332: mov     [esp+20h+var_10], edi
0x45C336: jz      loc_45C457
0x45C33C: lea     esp, [esp+0]
0x45C340: mov     ecx, esi
0x45C342: call    BSSimpleList_IsEmpty
0x45C347: test    al, al
0x45C349: jnz     loc_45C457
0x45C34F: mov     esi, [esi]
0x45C351: push    0; int
0x45C353: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x45C358: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45C35D: push    0; int
0x45C35F: push    esi; void *
0x45C360: call    OblivionDynamicCast
0x45C365: mov     esi, eax
0x45C367: add     esp, 14h
0x45C36A: test    esi, esi
0x45C36C: jz      loc_45C42A
0x45C372: mov     ecx, esi; int
0x45C374: call    EvaluatePackage
0x45C379: mov     ecx, esi; int
0x45C37B: call    sub_5ED860
0x45C380: mov     ecx, [esi+58h]
0x45C383: test    ecx, ecx
0x45C385: jz      loc_45C42A
0x45C38B: mov     eax, [ecx]
0x45C38D: mov     edx, [eax+8]
0x45C390: call    edx
0x45C392: test    eax, eax
0x45C394: jnz     loc_45C41D
0x45C39A: fld     dword ptr [esi+20h]
0x45C39D: fcomp   qword ptr ds:0A3A5B0h
0x45C3A3: fnstsw  ax
0x45C3A5: test    ah, 44h
0x45C3A8: jp      short loc_45C41D
0x45C3AA: mov     eax, [esi]
0x45C3AC: mov     edx, [eax+174h]
0x45C3B2: mov     ecx, esi
0x45C3B4: call    edx
0x45C3B6: mov     edi, [eax]
0x45C3B8: mov     ebx, [eax+4]
0x45C3BB: mov     ebp, [eax+8]
0x45C3BE: mov     ecx, esi; this
0x45C3C0: call    TESObjectREFR_GetParentCell
0x45C3C5: test    eax, eax
0x45C3C7: jz      short loc_45C3F8
0x45C3C9: push    0; a4
0x45C3CB: push    0; a3
0x45C3CD: push    1; a2
0x45C3CF: mov     ecx, esi; this
0x45C3D1: call    TESObjectREFR_GetParentCell
0x45C3D6: push    eax; int
0x45C3D7: sub     esp, 0Ch
0x45C3DA: mov     eax, esp
0x45C3DC: mov     [eax], edi
0x45C3DE: mov     [eax+4], ebx
0x45C3E1: mov     [eax+8], ebp
0x45C3E4: lea     eax, [esp+3Ch+var_C]
0x45C3E8: push    eax; int
0x45C3E9: mov     ecx, esi
0x45C3EB: call    sub_5E2E20
0x45C3F0: mov     edi, [eax]
0x45C3F2: mov     ebx, [eax+4]
0x45C3F5: mov     ebp, [eax+8]
0x45C3F8: sub     esp, 0Ch
0x45C3FB: mov     eax, esp
0x45C3FD: mov     [eax], edi
0x45C3FF: mov     [eax+4], ebx
0x45C402: mov     ecx, esi; this
0x45C404: mov     [eax+8], ebp
0x45C407: call    TESObjectREFR_SetPosition
0x45C40C: fldz
0x45C40E: push    ecx
0x45C40F: fstp    [esp+24h+var_24]; float
0x45C412: mov     ecx, esi
0x45C414: call    sub_4D89D0
0x45C419: mov     edi, [esp+24h+var_14]
0x45C41D: mov     ecx, [esi+58h]
0x45C420: mov     edx, [ecx]
0x45C422: mov     eax, [edx+18h]
0x45C425: push    1
0x45C427: push    esi
0x45C428: call    eax
0x45C42A: mov     eax, [edi+3Ch]
0x45C42D: test    eax, eax
0x45C42F: lea     esi, [edi+38h]
0x45C432: jz      short loc_45C44C
0x45C434: mov     ecx, [eax+4]
0x45C437: mov     [esi+4], ecx
0x45C43A: mov     edx, [eax]
0x45C43C: push    eax
0x45C43D: mov     [esi], edx
0x45C43F: call    FormHeapFree
0x45C444: add     esp, 4
0x45C447: jmp     loc_45C340
0x45C44C: mov     dword ptr [esi], 0
0x45C452: jmp     loc_45C340
0x45C457: and     dword ptr [edi+18h], 0FFFFFFF7h
0x45C45B: pop     edi
0x45C45C: pop     esi
0x45C45D: pop     ebp
0x45C45E: pop     ebx
0x45C45F: add     esp, 10h
0x45C462: retn
