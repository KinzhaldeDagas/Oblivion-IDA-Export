0x435270: mov     eax, [esp+arg_0]; QueuedTreeModel description helper. Formats this queued entry as literal type "tree model" through 0x434D40.
0x435274: push    offset aTreeModel; "tree model"
0x435279: push    eax
0x43527A: call    sub_434D40; Generic queued file description formatter. Uses +0x20 path string, +0x24 archive/file entry offset/size, and +0x1C child list.
0x43527F: retn    4
