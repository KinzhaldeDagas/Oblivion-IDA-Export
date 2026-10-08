0x70A280: fld     [esp+arg_0]
0x70A284: push    esi
0x70A285: mov     esi, ecx
0x70A287: movzx   eax, byte ptr [esi+18h]
0x70A28B: shr     al, 3
0x70A28E: push    edi
0x70A28F: and     eax, 0FFFFFF01h
0x70A294: push    eax; updateProperties
0x70A295: push    ecx
0x70A296: fstp    [esp+10h+applicationTime]; applicationTime
0x70A299: call    NiAVObject_UpdatePropertiesAndControllers; Update one NiAVObject's property controllers and attached NiTimeController chain. If requested, walk the property list at NiAVObject+0x9C and invoke property virtual +0x50 when its controller pointer is non-null. Always walk NiObjectNET.controller at object+0x0C through NiTimeController.next at +0x34 and invoke controller virtual Update +0x54 with applicationTime. No Active-bit prefilter occurs here: NiTimeController.flags+0x08 bit 3 only affects time-cache logic inside the controller. External Crossbow consequence after this Oblivion decode: temporarily clearing the base Active bit inside an already-entered morph hook will not by itself stop the next scene traversal, but pointer discovery still cannot make a graph that is not traversed dispatch Update.
0x70A29E: mov     cl, [esi+18h]
0x70A2A1: shr     cl, 2
0x70A2A4: test    cl, 1
0x70A2A7: jz      short loc_70A2C5
0x70A2A9: mov     edx, [esi]
0x70A2AB: mov     eax, [edx+74h]
0x70A2AE: mov     ecx, esi
0x70A2B0: call    eax
0x70A2B2: lea     ecx, [esi+64h]
0x70A2B5: push    ecx; transform
0x70A2B6: lea     edx, [esi+0CCh]
0x70A2BC: push    edx; input
0x70A2BD: lea     ecx, [esi+20h]; output
0x70A2C0: call    NiBound_TransformInto
0x70A2C5: xor     edi, edi
0x70A2C7: cmp     [esi+0B6h], di
0x70A2CE: jbe     short loc_70A304
0x70A2D0: mov     eax, [esi+0B0h]
0x70A2D6: mov     ecx, [eax+edi*4]
0x70A2D9: test    ecx, ecx
0x70A2DB: jz      short loc_70A2F6
0x70A2DD: mov     dl, [ecx+18h]
0x70A2E0: shr     dl, 1
0x70A2E2: test    dl, 1
0x70A2E5: jz      short loc_70A2F6
0x70A2E7: mov     eax, [ecx]
0x70A2E9: fld     [esp+8+arg_0]
0x70A2ED: mov     edx, [eax+68h]
0x70A2F0: push    ecx
0x70A2F1: fstp    [esp+0Ch+var_C]
0x70A2F4: call    edx
0x70A2F6: movzx   eax, word ptr [esi+0B6h]
0x70A2FD: add     edi, 1
0x70A300: cmp     edi, eax
0x70A302: jb      short loc_70A2D0
0x70A304: pop     edi
0x70A305: pop     esi
0x70A306: retn    4
