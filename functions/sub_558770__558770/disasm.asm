0x558770: push    0FFFFFFFFh
0x558772: push    offset SEH_558770
0x558777: mov     eax, large fs:0
0x55877D: push    eax
0x55877E: sub     esp, 20h
0x558781: push    ebp
0x558782: push    esi
0x558783: push    edi
0x558784: mov     eax, ds:0B30AACh
0x558789: xor     eax, esp
0x55878B: push    eax
0x55878C: lea     eax, [esp+3Ch+var_C]
0x558790: mov     large fs:0, eax
0x558796: mov     esi, ecx
0x558798: mov     [esp+3Ch+var_2C], esi
0x55879C: push    offset sub_558570; a5
0x5587A1: push    offset FaceGenEgtBasisBank_Construct; a4
0x5587A6: push    2; size
0x5587A8: push    10h; a2
0x5587AA: lea     edi, [esi+4]
0x5587AD: push    edi; a1
0x5587AE: call    ArrayConstructor
0x5587B3: mov     edx, [esp+3Ch+Src]
0x5587B7: mov     eax, edx
0x5587B9: mov     [esp+3Ch+var_4], 0
0x5587C1: mov     [esp+3Ch+var_28.capacity], 0Fh
0x5587C9: mov     [esp+3Ch+var_28.size], 0
0x5587D1: mov     byte ptr [esp+3Ch+var_28.storage], 0
0x5587D6: lea     ebp, [eax+1]
0x5587D9: lea     esp, [esp+0]
0x5587E0: mov     cl, [eax]
0x5587E2: add     eax, 1
0x5587E5: test    cl, cl
0x5587E7: jnz     short loc_5587E0
0x5587E9: sub     eax, ebp
0x5587EB: push    eax; count
0x5587EC: push    edx; source
0x5587ED: lea     ecx, [esp+44h+var_28]; this
0x5587F1: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x5587F6: lea     eax, [esi+14h]
0x5587F9: push    eax
0x5587FA: push    edi
0x5587FB: lea     ecx, [esp+44h+var_28]
0x5587FF: push    esi
0x558800: push    ecx
0x558801: mov     byte ptr [esp+4Ch+var_4], 1
0x558806: call    sub_6F0A00
0x55880B: add     esp, 10h
0x55880E: cmp     [esp+3Ch+var_28.capacity], 10h
0x558813: jb      short loc_558822
0x558815: mov     edx, dword ptr [esp+3Ch+var_28.storage]
0x558819: push    edx
0x55881A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x55881F: add     esp, 4
0x558822: mov     eax, esi
0x558824: mov     ecx, [esp+3Ch+var_C]
0x558828: mov     large fs:0, ecx
0x55882F: pop     ecx
0x558830: pop     edi
0x558831: pop     esi
0x558832: pop     ebp
0x558833: add     esp, 2Ch
0x558836: retn    4
0x9BC7A0: push    offset sub_558570; void (__thiscall *)(void *)
0x9BC7A5: push    2; int
0x9BC7A7: push    10h; unsigned int
0x9BC7A9: mov     eax, [ebp-2Ch]
0x9BC7AC: add     eax, 4
0x9BC7AF: push    eax; void *
0x9BC7B0: call    $LN21
0x9BC7B5: retn
0x9BC7B6: lea     ecx, [ebp-28h]; this
0x9BC7B9: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9BC7BE: mov     edx, [esp+arg_4]
0x9BC7C2: lea     eax, [edx-2Ch]
0x9BC7C5: mov     ecx, [edx-30h]
0x9BC7C8: xor     ecx, eax
0x9BC7CA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC7CF: mov     eax, offset stru_AE63DC
0x9BC7D4: jmp     ___CxxFrameHandler3
