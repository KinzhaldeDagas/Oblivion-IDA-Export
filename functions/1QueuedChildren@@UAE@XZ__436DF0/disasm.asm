0x436DF0: push    0FFFFFFFFh
0x436DF2: push    offset ??1QueuedChildren@@UAE@XZ_SEH
0x436DF7: mov     eax, large fs:0
0x436DFD: push    eax
0x436DFE: push    ecx
0x436DFF: push    esi
0x436E00: push    edi
0x436E01: mov     eax, ___security_cookie
0x436E06: xor     eax, esp
0x436E08: push    eax
0x436E09: lea     eax, [esp+1Ch+var_C]
0x436E0D: mov     large fs:0, eax
0x436E13: mov     esi, ecx
0x436E15: mov     [esp+1Ch+var_10], esi
0x436E19: mov     dword ptr [esi], offset ??_7QueuedChildren@@6B@; const QueuedChildren::`vftable'
0x436E1F: mov     [esp+1Ch+var_4], 0
0x436E27: call    sub_435C20
0x436E2C: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VQueuedFile@@@@@@6B@; const NiTArray<NiPointer<QueuedFile>>::`vftable'
0x436E32: mov     esi, [esi+4]
0x436E35: test    esi, esi
0x436E37: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x436E3F: jz      short loc_436E5E
0x436E41: mov     eax, [esi-4]
0x436E44: push    offset sub_4BDDC0; void (__thiscall *)(void *)
0x436E49: lea     edi, [esi-4]
0x436E4C: push    eax; int
0x436E4D: push    4; unsigned int
0x436E4F: push    esi; void *
0x436E50: call    $LN21
0x436E55: push    edi
0x436E56: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x436E5B: add     esp, 4
0x436E5E: mov     ecx, [esp+1Ch+var_C]
0x436E62: mov     large fs:0, ecx
0x436E69: pop     ecx
0x436E6A: pop     edi
0x436E6B: pop     esi
0x436E6C: add     esp, 10h
0x436E6F: retn
0x436800: mov     eax, [ecx+4]
0x436803: test    eax, eax
0x436805: mov     dword ptr [ecx], offset ??_7?$NiTArray@V?$NiPointer@VQueuedFile@@@@@@6B@; const NiTArray<NiPointer<QueuedFile>>::`vftable'
0x43680B: jz      short locret_43682C
0x43680D: mov     ecx, [eax-4]
0x436810: push    esi
0x436811: lea     esi, [eax-4]
0x436814: push    offset sub_4BDDC0; void (__thiscall *)(void *)
0x436819: push    ecx; int
0x43681A: push    4; unsigned int
0x43681C: push    eax; void *
0x43681D: call    $LN21
0x436822: push    esi
0x436823: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x436828: add     esp, 4
0x43682B: pop     esi
0x43682C: retn
0x9AC360: mov     ecx, [ebp-10h]
0x9AC363: jmp     loc_436800
0x9AC368: mov     edx, [esp+arg_4]
0x9AC36C: lea     eax, [edx-0Ch]
0x9AC36F: mov     ecx, [edx-10h]
0x9AC372: xor     ecx, eax
0x9AC374: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC379: mov     eax, offset stru_AD9034
0x9AC37E: jmp     ___CxxFrameHandler3
