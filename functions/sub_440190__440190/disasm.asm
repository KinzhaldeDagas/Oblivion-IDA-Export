0x440190: push    esi
0x440191: mov     esi, ecx
0x440193: mov     ecx, [esi+5Ch]; this
0x440196: cmp     dword ptr [ecx+0DCh], 0
0x44019D: jz      short loc_4401C9
0x44019F: push    edi
0x4401A0: mov     edi, [esp+8+arg_0]
0x4401A4: test    edi, edi
0x4401A6: jz      short loc_4401E8
0x4401A8: mov     ecx, edi; this
0x4401AA: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x4401AF: test    al, al
0x4401B1: jz      short loc_4401D9
0x4401B3: mov     ecx, edi; this
0x4401B5: call    TESObjectCELL_HasFlag80
0x4401BA: test    al, al
0x4401BC: mov     ecx, [esi+5Ch]; this
0x4401BF: jz      short loc_4401CD
0x4401C1: push    2; mode
0x4401C3: call    Sky__SetMode; Changes Oblivion Sky mode at +0xDC, invoking the appropriate setup/teardown path when crossing between modes 0/1 and 2/3. Fallout was consulted afterward and corroborates Sky::SetMode terminology.
0x4401C8: pop     edi
0x4401C9: pop     esi
0x4401CA: retn    4
0x4401CD: push    1; mode
0x4401CF: call    Sky__SetMode; Changes Oblivion Sky mode at +0xDC, invoking the appropriate setup/teardown path when crossing between modes 0/1 and 2/3. Fallout was consulted afterward and corroborates Sky::SetMode terminology.
0x4401D4: pop     edi
0x4401D5: pop     esi
0x4401D6: retn    4
0x4401D9: mov     ecx, [esi+5Ch]; this
0x4401DC: push    3; mode
0x4401DE: call    Sky__SetMode; Changes Oblivion Sky mode at +0xDC, invoking the appropriate setup/teardown path when crossing between modes 0/1 and 2/3. Fallout was consulted afterward and corroborates Sky::SetMode terminology.
0x4401E3: pop     edi
0x4401E4: pop     esi
0x4401E5: retn    4
0x4401E8: pop     edi
0x4401E9: pop     esi
0x4401EA: mov     [esp+arg_0], 3; mode
0x4401F2: jmp     Sky__SetMode; Changes Oblivion Sky mode at +0xDC, invoking the appropriate setup/teardown path when crossing between modes 0/1 and 2/3. Fallout was consulted afterward and corroborates Sky::SetMode terminology.
