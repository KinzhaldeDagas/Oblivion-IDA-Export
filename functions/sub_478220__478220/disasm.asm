0x478220: mov     ecx, [esp+arg_0]
0x478224: push    offset dword_A7D0EC
0x478229: call    NiObjectNET_GetExtraData; NiObjectNET::GetExtraData(name), native RET 4 behavior. Player shadow BBX lookups remain native after Pass247 rollback.
0x47822E: test    eax, eax
0x478230: jz      short locret_478280
0x478232: mov     eax, [eax+0Ch]
0x478235: shr     eax, 4
0x478238: test    al, 1
0x47823A: jz      short locret_478280
0x47823C: push    esi
0x47823D: mov     esi, [esp+4+reference]
0x478241: test    esi, esi
0x478243: push    edi
0x478244: mov     edi, [esp+8+referenceRoot]
0x478248: jz      short loc_478275
0x47824A: cmp     [esp+8+arg_8], 0Eh
0x47824F: jnz     short loc_478275
0x478251: mov     edx, [esi]
0x478253: mov     eax, [edx+168h]
0x478259: mov     ecx, esi
0x47825B: call    eax
0x47825D: test    eax, eax
0x47825F: jz      short loc_478275
0x478261: mov     eax, [eax+130h]
0x478267: test    eax, eax
0x478269: jz      short loc_478275
0x47826B: push    edi; referenceRoot
0x47826C: lea     ecx, [eax-30h]; self
0x47826F: push    esi; reference
0x478270: call    TESObjectLIGH_ConfigureReferencePointLight; Create/find and configure the NiPointLight attached to a TESObjectLIGH reference. lightFlags_7C bit 0x20 ('Off by default') suppresses the normal non-actor path; bit 0x04 ('Negative') negates RGB. The routine registers the source with ShadowSceneNode and seeds attenuation/dimmer, but does not read editor bits 0x200/0x400 and does not admit shadow casters.
0x478275: push    edi
0x478276: call    sub_4E26F0
0x47827B: add     esp, 4
0x47827E: pop     edi
0x47827F: pop     esi
0x478280: retn
