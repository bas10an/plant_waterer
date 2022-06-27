
class IWaterPump
{
public:
    virtual void init() = 0;
    virtual void open() = 0;
    virtual void close() = 0;
    virtual ~IWaterPump {}

private:
};