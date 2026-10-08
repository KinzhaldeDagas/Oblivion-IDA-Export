0x7075B0: fld     [esp+arg_0]
0x7075B4: push    esi
0x7075B5: mov     esi, ecx
0x7075B7: movzx   eax, byte ptr [esi+18h]
0x7075BB: shr     al, 3
0x7075BE: and     eax, 0FFFFFF01h
0x7075C3: push    eax; updateProperties
0x7075C4: push    ecx
0x7075C5: fstp    [esp+0Ch+applicationTime]; applicationTime
0x7075C8: call    NiAVObject_UpdatePropertiesAndControllers; Update one NiAVObject's property controllers and attached NiTimeController chain. If requested, walk the property list at NiAVObject+0x9C and invoke property virtual +0x50 when its controller pointer is non-null. Always walk NiObjectNET.controller at object+0x0C through NiTimeController.next at +0x34 and invoke controller virtual Update +0x54 with applicationTime. No Active-bit prefilter occurs here: NiTimeController.flags+0x08 bit 3 only affects time-cache logic inside the controller. External Crossbow consequence after this Oblivion decode: temporarily clearing the base Active bit inside an already-entered morph hook will not by itself stop the next scene traversal, but pointer discovery still cannot make a graph that is not traversed dispatch Update.
0x7075CD: mov     cl, [esi+18h]
0x7075D0: shr     cl, 2
0x7075D3: test    cl, 1
0x7075D6: jz      short loc_7075EA
0x7075D8: mov     edx, [esi]
0x7075DA: mov     eax, [edx+74h]
0x7075DD: mov     ecx, esi
0x7075DF: call    eax
0x7075E1: mov     edx, [esi]
0x7075E3: mov     eax, [edx+78h]
0x7075E6: mov     ecx, esi
0x7075E8: call    eax
0x7075EA: pop     esi
0x7075EB: retn    4
