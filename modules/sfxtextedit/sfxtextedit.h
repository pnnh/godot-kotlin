/* sfxtextedit.h */

#ifndef SFXTEXTEDIT_H
#define SFXTEXTEDIT_H

#include "core/reference.h"

class SFXTextEdit : public Reference {
    GDCLASS(SFXTextEdit, Reference);

    int count;

protected:
    static void _bind_methods();

public:
    void add(int p_value);
    void reset();
    int get_total() const;

    SFXTextEdit();
};

#endif // SFXTEXTEDIT_H