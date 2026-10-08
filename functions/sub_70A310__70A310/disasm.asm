0x70A310: fld     [esp+arg_0]
0x70A314: push    esi
0x70A315: push    edi
0x70A316: push    1; updateProperties
0x70A318: push    ecx
0x70A319: fstp    [esp+10h+applicationTime]; applicationTime
0x70A31C: mov     esi, ecx
0x70A31E: call    NiAVObject_UpdatePropertiesAndControllers; Update one NiAVObject's property controllers and attached NiTimeController chain. If requested, walk the property list at NiAVObject+0x9C and invoke property virtual +0x50 when its controller pointer is non-null. Always walk NiObjectNET.controller at object+0x0C through NiTimeController.next at +0x34 and invoke controller virtual Update +0x54 with applicationTime. No Active-bit prefilter occurs here: NiTimeController.flags+0x08 bit 3 only affects time-cache logic inside the controller. External Crossbow consequence after this Oblivion decode: temporarily clearing the base Active bit inside an already-entered morph hook will not by itself stop the next scene traversal, but pointer discovery still cannot make a graph that is not traversed dispatch Update.
0x70A323: xor     edi, edi
0x70A325: cmp     [esi+0B6h], di
0x70A32C: jbe     short loc_70A35A
0x70A32E: mov     edi, edi
0x70A330: mov     eax, [esi+0B0h]
0x70A336: mov     ecx, [eax+edi*4]
0x70A339: test    ecx, ecx
0x70A33B: jz      short loc_70A34C
0x70A33D: mov     edx, [ecx]
0x70A33F: fld     [esp+8+arg_0]
0x70A343: mov     eax, [edx+4Ch]
0x70A346: push    ecx
0x70A347: fstp    [esp+0Ch+var_C]
0x70A34A: call    eax
0x70A34C: movzx   ecx, word ptr [esi+0B6h]
0x70A353: add     edi, 1
0x70A356: cmp     edi, ecx
0x70A358: jb      short loc_70A330
0x70A35A: pop     edi
0x70A35B: pop     esi
0x70A35C: retn    4
