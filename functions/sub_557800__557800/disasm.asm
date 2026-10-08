0x557800: push    0FFFFFFFFh
0x557802: push    offset SEH_6F1670
0x557807: mov     eax, large fs:0
0x55780D: push    eax
0x55780E: push    ecx
0x55780F: mov     eax, ds:0B30AACh
0x557814: xor     eax, esp
0x557816: push    eax
0x557817: lea     eax, [esp+14h+var_C]
0x55781B: mov     large fs:0, eax
0x557821: mov     eax, [esp+14h+arg_0]
0x557825: mov     [esp+14h+arg_0], eax
0x557829: mov     [esp+14h+var_10], eax
0x55782D: test    eax, eax
0x55782F: mov     [esp+14h+var_4], 0
0x557837: jz      short loc_55786E
0x557839: mov     ecx, [esp+14h+arg_4]
0x55783D: fld     dword ptr [ecx]
0x55783F: push    offset OB_stVector4_DestroyThiscall_010201A0; void (__thiscall *)(void *)
0x557844: fstp    dword ptr [eax]
0x557846: mov     edx, [ecx+4]
0x557849: mov     [eax+4], edx
0x55784C: mov     edx, [ecx+8]
0x55784F: push    offset sub_557340; void (__thiscall *)(void *, void *)
0x557854: push    3; int
0x557856: mov     [eax+8], edx
0x557859: mov     edx, [ecx+0Ch]
0x55785C: push    10h; unsigned int
0x55785E: add     ecx, 10h
0x557861: mov     [eax+0Ch], edx
0x557864: push    ecx; void *
0x557865: add     eax, 10h
0x557868: push    eax; void *
0x557869: call    ??__C@YGXPAX0IHP6EX00@ZP6EX0@Z@Z; `eh vector copy constructor iterator'(void *,void *,uint,int,void (*)(void *,void *),void (*)(void *))
0x55786E: mov     ecx, dword ptr [esp+14h+var_C]
0x557872: mov     large fs:0, ecx
0x557879: pop     ecx
0x55787A: add     esp, 10h
0x55787D: retn
0x9BC620: mov     eax, [ebp+4]
0x9BC623: push    eax
0x9BC624: mov     ecx, [ebp-10h]; this
0x9BC627: push    ecx
0x9BC628: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9BC62D: add     esp, 8
0x9BC630: retn
0x9BC631: mov     edx, [esp+arg_4]
0x9BC635: lea     eax, [edx-4]
0x9BC638: mov     ecx, [edx-8]
0x9BC63B: xor     ecx, eax
0x9BC63D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC642: mov     eax, offset stru_AE6214
0x9BC647: jmp     ___CxxFrameHandler3
