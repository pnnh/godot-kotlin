/* register_types.cpp */

#include "register_types.h"

#include "core/class_db.h"
#include "sfxtextedit.h"

void register_sfxtextedit_types() {
    ClassDB::register_class<SFXTextEdit>();
}

void unregister_sfxtextedit_types() {
   // Nothing to do here in this example.
}